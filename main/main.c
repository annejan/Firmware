#include "sdkconfig.h"
#include "driver/gpio.h"
#include "esp_event.h"
#include "esp_event_loop.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "freertos/FreeRTOS.h"
#include "nvs_flash.h"
#include <gde.h>
#include <gde-driver.h>
#include <font.h>
#include <math.h>

#include "badge_pins.h"
#include "badge_i2c.h"
#include "badge_portexp.h"
#include "badge_mpr121.h"
#include "badge_touch.h"
#include "badge_leds.h"
#include "badge_eink.h"

#include "imgv2_sha.h"
#include "imgv2_menu.h"
#include "imgv2_nick.h"
#include "imgv2_weather.h"
#include "imgv2_test.h"
#include "knorrie.h"
#include "logo.h"
#include "plain.h"
#include "badgers.h"
#include "outline.h"

esp_err_t event_handler(void *ctx, system_event_t *event) { return ESP_OK; }

uint32_t
get_buttons(void)
{
	uint32_t bits = 0;
#ifdef PIN_NUM_BUTTON_A
	bits |= gpio_get_level(PIN_NUM_BUTTON_A)     <<  0; // A
	bits |= gpio_get_level(PIN_NUM_BUTTON_B)     <<  1; // B
	bits |= gpio_get_level(PIN_NUM_BUTTON_MID)   <<  2; // MID
	bits |= gpio_get_level(PIN_NUM_BUTTON_UP)    <<  3; // UP
	bits |= gpio_get_level(PIN_NUM_BUTTON_DOWN)  <<  4; // DOWN
	bits |= gpio_get_level(PIN_NUM_BUTTON_LEFT)  <<  5; // LEFT
	bits |= gpio_get_level(PIN_NUM_BUTTON_RIGHT) <<  6; // RIGHT
#else
	bits |= gpio_get_level(PIN_NUM_BUTTON_FLASH) <<  7; // FLASH
#endif // ! PIN_NUM_BUTTON_A
	return bits;
}

#include "event_queue.h"

uint32_t buttons_state = 0;

void gpio_intr_buttons(void *arg) {
  // read status to get interrupt status for GPIO 0-31
  uint32_t gpio_intr_status_lo = READ_PERI_REG(GPIO_STATUS_REG);
  // read status to get interrupt status for GPIO 32-39
  uint32_t gpio_intr_status_hi = READ_PERI_REG(GPIO_STATUS1_REG);
  // clear intr for GPIO 0-31
  SET_PERI_REG_MASK(GPIO_STATUS_W1TC_REG, gpio_intr_status_lo);
  // clear intr for GPIO 32-39
  SET_PERI_REG_MASK(GPIO_STATUS1_W1TC_REG, gpio_intr_status_hi);

  uint32_t buttons_new = get_buttons();
  uint32_t buttons_down = (~buttons_new) & buttons_state;
  buttons_state = buttons_new;

  if (buttons_down != 0)
    xQueueSendFromISR(evt_queue, &buttons_down, NULL);

  if (buttons_down & (1 << 0))
    ets_printf("Button A\n");
  if (buttons_down & (1 << 1))
    ets_printf("Button B\n");
  if (buttons_down & (1 << 2))
    ets_printf("Button MID\n");
  if (buttons_down & (1 << 3))
    ets_printf("Button UP\n");
  if (buttons_down & (1 << 4))
    ets_printf("Button DOWN\n");
  if (buttons_down & (1 << 5))
    ets_printf("Button LEFT\n");
  if (buttons_down & (1 << 6))
    ets_printf("Button RIGHT\n");
  if (buttons_down & (1 << 7))
    ets_printf("Button FLASH\n");
}

#ifdef I2C_TOUCHPAD_ADDR
void
touch_event_handler(int event)
{
	// convert into button queue event
	if (((event >> 16) & 0x0f) == 0x0) { // button down event
		static const int conv[12] =
		{ -1, -1, 5, 3, 6, 4, -1, 0, 2, 1, -1, 0 };
		if (((event >> 8) & 0xff) < 12) {
			int id = conv[(event >> 8) & 0xff];
			if (id != -1)
			{
				uint32_t buttons_down = 1<<id;
				xQueueSend(evt_queue, &buttons_down, 0);
			}
		}
	}
}
#endif // I2C_TOUCHPAD_ADDR

#ifdef I2C_MPR121_ADDR
void
mpr121_event_handler(void *b)
{
	int button = (int) b;
	xQueueSend(evt_queue, &button, 0);
}
#endif // I2C_MPR121_ADDR

struct menu_item {
  const char *title;
  void (*handler)(void);
};

struct scroll_item {
	const char *title;
};

#include "demo_text1.h"
#include "demo_text2.h"
#include "demo_greyscale1.h"
#include "demo_greyscale2.h"
#include "demo_greyscale_img1.h"
#include "demo_greyscale_img2.h"
#include "demo_greyscale_img3.h"
#include "demo_greyscale_img4.h"
#include "demo_partial_update.h"
#include "demo_dot1.h"
#include "demo_test_adc.h"
#include "demo_leds.h"

const struct menu_item demoMenu[] = {
    {"text demo 1", &demoText1},
    {"text demo 2", &demoText2},
#ifdef CONFIG_SHA_BADGE_EINK_GDEH029A1
    {"greyscale 1", &demoGreyscale1},
    {"greyscale 2", &demoGreyscale2},
    {"greyscale image 1", &demoGreyscaleImg1},
    {"greyscale image 2", &demoGreyscaleImg2},
    {"greyscale image 3", &demoGreyscaleImg3},
#endif // CONFIG_SHA_BADGE_EINK_GDEH029A1
    {"greyscale image 4", &demoGreyscaleImg4},
    {"partial update test", &demoPartialUpdate},
#ifdef CONFIG_SHA_BADGE_EINK_GDEH029A1
    {"dot 1", &demoDot1},
#endif // CONFIG_SHA_BADGE_EINK_GDEH029A1
    {"ADC test", &demoTestAdc},
#ifdef PIN_NUM_LEDS
    {"LEDs demo", &demo_leds},
#endif // PIN_NUM_LEDS
    {"tetris?", NULL},
    {"something else", NULL},
    {"test, test, test", NULL},
    {"another item..", NULL},
    {"dot 2", NULL},
    {"dot 3", NULL},
    {NULL, NULL},
};

const struct scroll_item scrollTxt[] = {
	{""},
	{""},
	{""},
	{""},
	{""},
	{""},
	{""},
	{"     SHA BADGE 2017 demo"},
	{""},
	{""},
	{" Released at Outline 2017"},
	{""},
	{""},
	{"Altijd weer gezellig op"},
	{""},
	{"Outline 2017 Willemsoord"},
	{""},
	{"Demo's Chiptunes en een"},
	{""},
	{"boel Nederlands gelul"},
	{""},
	{"Ook deFEEST is weer van de"},
	{""},
	{"Partij . ."},
	{""},
	{""},
	{""},
	{"         deFeest"},
	{""},
	{""},
	{""},
	{""},
	{""},
	{""},
	{""},
	{""},
};


const struct scroll_item secondScrollTxt[] = {
	{""},
	{""},
	{""},
	{"     Code: Anus/deFEEST"},
	{""},
	{""},
	{" More code: tsd/cronix"},
	{""},
	{""},
	{" Graphics: Anus, Knorrie"},
	{""},
	{"More graphics: Adulau && Weebl"},
	{""},
	{"See you at SHA2017 ?!"},
	{""},
	{"  August 4-8 2017"},
	{""},
	{"                   Zeewolde"},
	{""},
	{"If you do, make sure to visit"},
	{""},
	{"the deFEEST village"},
	{""},
	{"sha2017.org"},
	{""},
	{""},
	{""},
	{"       deFeest 2017"},
	{""},
	{""},
	{""},
	{""},
	{""},
	{""},
	{""},
	{""},
};

#ifndef CONFIG_SHA_BADGE_EINK_DEPG0290B1
const uint8_t eink_upd_menu_lut[30] = {
	0x99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0,    0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};
#endif

const struct badge_eink_update eink_upd_menu = {
#ifndef CONFIG_SHA_BADGE_EINK_DEPG0290B1
	.lut      = -1,
	.lut_custom = eink_upd_menu_lut,
	.reg_0x3a = 2, // 2 dummy lines per gate
	.reg_0x3b = 0, // 30us per line
#else
	.lut      = LUT_FASTEST,
	.reg_0x3a = 2, // 2 dummy lines per gate
	.reg_0x3b = 8, // 62us per line
#endif
	.y_start  = 0,
	.y_end    = 295,
};

#define SCROLL_UPDATE_CYCLES 1
#define SCROLL_LINE_NUMBERS 24
uint8_t screen_buf[296*16];

	// white line first
void displayScroll(const struct scroll_item *itemlist) {
  int num_items = 0;
  while (itemlist[num_items].title != NULL)
    num_items++;
  int scroll_pos = 0;
  int item_pos = 0;
  int num_draw = 0;
	int x = 0;
	draw_font(screen_buf, 0, 0, BADGE_EINK_WIDTH, "",
		FONT_16PX | FONT_FULL_WIDTH | FONT_INVERT);
  while (scroll_pos < SCROLL_LINE_NUMBERS) { // TODO
    TickType_t xTicksToWait = portMAX_DELAY;
		int j;
		for (j = 0; j < 16; j++) { // smooth scroll
	    /* draw menu */
	    if (num_draw < SCROLL_UPDATE_CYCLES) {
			  if (num_draw == 0) {
					// init buffer

					// if (scroll_pos > 20) {
					// 	x = (int)17 + 16 * sin(scroll_pos/10);
					// }

					int i;
					for (i = 0; i < 8; i++) {
					  int pos = scroll_pos + i;
					  draw_font(screen_buf, x, 16-j+16*i, BADGE_EINK_WIDTH-x,
						  (pos < num_items) ? itemlist[pos].title : "",
						  FONT_16PX | FONT_FULL_WIDTH | FONT_INVERT);
					}
			  }

			  // all eink displays have 2 'pages'; after writing the second one,
			  // we don't have to write the image itself anymore.
			  if (num_draw < 2)
				badge_eink_display(screen_buf, DISPLAY_FLAG_NO_UPDATE);

			  badge_eink_update(&eink_upd_menu);

	      num_draw++;
	      if (num_draw < SCROLL_UPDATE_CYCLES)
	        xTicksToWait = 0;
	    }
			num_draw = 0;
		}
		num_draw = 0;
		scroll_pos++;
  }
}

// pictures
#define NUM_PICTURES 12
const uint8_t *pictures[NUM_PICTURES] = {
	badger_1,
	badger_2,
	badger_3,
	badger_4,
	badgers_1,
	badgers_2,
	badgers_3,
	badgers_4,
	badger3_1,
	badger3_2,
	badger3_3,
	badger3_4
};

void
app_main(void) {
	nvs_flash_init();

	// install isr-service, so we can register interrupt-handlers per
	// gpio pin.
	gpio_install_isr_service(0);

	/* configure buttons input */
	evt_queue = xQueueCreate(10, sizeof(uint32_t));
#ifdef PIN_NUM_BUTTON_A
	gpio_isr_handler_add(PIN_NUM_BUTTON_A    , gpio_intr_buttons, NULL);
	gpio_isr_handler_add(PIN_NUM_BUTTON_B    , gpio_intr_buttons, NULL);
	gpio_isr_handler_add(PIN_NUM_BUTTON_MID  , gpio_intr_buttons, NULL);
	gpio_isr_handler_add(PIN_NUM_BUTTON_UP   , gpio_intr_buttons, NULL);
	gpio_isr_handler_add(PIN_NUM_BUTTON_DOWN , gpio_intr_buttons, NULL);
	gpio_isr_handler_add(PIN_NUM_BUTTON_LEFT , gpio_intr_buttons, NULL);
	gpio_isr_handler_add(PIN_NUM_BUTTON_RIGHT, gpio_intr_buttons, NULL);
#else
	gpio_isr_handler_add(PIN_NUM_BUTTON_FLASH, gpio_intr_buttons, NULL);
#endif // ! PIN_NUM_BUTTON_A

	// configure button-listener
	gpio_config_t io_conf;
	io_conf.intr_type = GPIO_INTR_ANYEDGE;
	io_conf.mode = GPIO_MODE_INPUT;
	io_conf.pin_bit_mask =
#ifdef PIN_NUM_BUTTON_A
		(1LL << PIN_NUM_BUTTON_A) |
		(1LL << PIN_NUM_BUTTON_B) |
		(1LL << PIN_NUM_BUTTON_MID) |
		(1LL << PIN_NUM_BUTTON_UP) |
		(1LL << PIN_NUM_BUTTON_DOWN) |
		(1LL << PIN_NUM_BUTTON_LEFT) |
		(1LL << PIN_NUM_BUTTON_RIGHT) |
#else
		(1LL << PIN_NUM_BUTTON_FLASH) |
#endif // ! PIN_NUM_BUTTON_A
		0LL;
	io_conf.pull_down_en = 0;
	io_conf.pull_up_en = 1;
	gpio_config(&io_conf);

#ifdef PIN_NUM_I2C_CLK
	badge_i2c_init();
#endif // PIN_NUM_I2C_CLK

#ifdef I2C_PORTEXP_ADDR
	badge_portexp_init();
#endif // I2C_PORTEXP_ADDR

#ifdef I2C_MPR121_ADDR
	badge_mpr121_init();
	badge_mpr121_set_interrupt_handler(MPR121_PIN_NUM_A     , mpr121_event_handler, (void*) (1<<0));
	badge_mpr121_set_interrupt_handler(MPR121_PIN_NUM_B     , mpr121_event_handler, (void*) (1<<1));
//	badge_mpr121_set_interrupt_handler(MPR121_PIN_NUM_START , mpr121_event_handler, (void*) (1<<0));
	badge_mpr121_set_interrupt_handler(MPR121_PIN_NUM_SELECT, mpr121_event_handler, (void*) (1<<2));
	badge_mpr121_set_interrupt_handler(MPR121_PIN_NUM_DOWN  , mpr121_event_handler, (void*) (1<<4));
	badge_mpr121_set_interrupt_handler(MPR121_PIN_NUM_RIGHT , mpr121_event_handler, (void*) (1<<6));
	badge_mpr121_set_interrupt_handler(MPR121_PIN_NUM_UP    , mpr121_event_handler, (void*) (1<<3));
	badge_mpr121_set_interrupt_handler(MPR121_PIN_NUM_LEFT  , mpr121_event_handler, (void*) (1<<5));
#endif // I2C_MPR121_ADDR

#ifdef I2C_TOUCHPAD_ADDR
	badge_touch_init();
	badge_touch_set_event_handler(touch_event_handler);
#endif // I2C_TOUCHPAD_ADDR

#ifdef PIN_NUM_LEDS
	badge_leds_init();
#endif // PIN_NUM_LEDS

  tcpip_adapter_init();
  ESP_ERROR_CHECK(esp_event_loop_init(event_handler, NULL));

#ifdef CONFIG_WIFI_USE
  wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
  ESP_ERROR_CHECK(esp_wifi_init(&cfg));
  ESP_ERROR_CHECK(esp_wifi_set_storage(WIFI_STORAGE_RAM));
  ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_STA));
  wifi_config_t sta_config = {
      .sta = {.ssid = CONFIG_WIFI_SSID, .password = CONFIG_WIFI_PASSWORD, .bssid_set = false}};
  ESP_ERROR_CHECK(esp_wifi_set_config(WIFI_IF_STA, &sta_config));
  ESP_ERROR_CHECK(esp_wifi_start());
  ESP_ERROR_CHECK(esp_wifi_connect());
#endif // CONFIG_WIFI_USE

  badge_eink_init();

  int picture_id = 0;
	ets_printf("SHA 2017 demo\n");

	bool buzz = false;

	#ifdef PORTEXP_PIN_NUM_LEDS
	badge_portexp_set_output_state(PORTEXP_PIN_NUM_VIBRATOR, 0);
	badge_portexp_set_output_high_z(PORTEXP_PIN_NUM_VIBRATOR, 0);
	badge_portexp_set_io_direction(PORTEXP_PIN_NUM_VIBRATOR, 1);
	#endif
	// TODO port "music" to new V3 badge

	int selected_lut = LUT_DEFAULT;

	badge_eink_display(outline, (selected_lut+1) << DISPLAY_FLAG_LUT_BIT);
	ets_delay_us(500000);

	badge_eink_display(imgv2_sha, (selected_lut+1) << DISPLAY_FLAG_LUT_BIT);
	ets_delay_us(500000);

	glow_leds();

  selected_lut = LUT_FASTEST;

	int jemoeder = 0;
	int duurttelang = 8;

  while (jemoeder < duurttelang) {
		badge_eink_display(pictures[picture_id], (selected_lut+1) << DISPLAY_FLAG_LUT_BIT);

	  if (picture_id + 1 < 4) {
	    picture_id++;
	  } else {
			picture_id=0;
		}
		jemoeder++;
  }

	jemoeder = 0;
	duurttelang = 16;
	while (jemoeder < duurttelang) {
		badge_eink_display(pictures[picture_id], (selected_lut+1) << DISPLAY_FLAG_LUT_BIT);

		if (picture_id + 1 < 8) {
			picture_id++;
		} else {
			picture_id=4;
		}
		jemoeder++;
	}

	jemoeder = 0;
	duurttelang = 16;
	while (jemoeder < duurttelang) {
		badge_eink_display(pictures[picture_id], (selected_lut+1) << DISPLAY_FLAG_LUT_BIT);

		if (picture_id + 1 < 12) {
			picture_id++;
		} else {
			picture_id=8;
		}
		jemoeder++;
	}

	selected_lut = LUT_DEFAULT;

	badge_eink_display(plain, (selected_lut+1) << DISPLAY_FLAG_LUT_BIT);

	demo_leds();

	displayScroll(scrollTxt);

	

	demoText2();

	displayScroll(secondScrollTxt);

	demoGreyscaleImg4();
}
