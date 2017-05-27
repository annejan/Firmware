#include "sdkconfig.h"

#include <string.h>
#include <freertos/FreeRTOS.h>
#include <esp_event.h>
#include <gde.h>
#include <gde-driver.h>

#include <badge_eink.h>
#include <font.h>

#include "event_queue.h"

// re-use screen_buf from main.c
extern uint8_t screen_buf[296*16];

void
demoText2(void) {
	/* draw test pattern */
	{
		int y;
		for (y=0; y<BADGE_EINK_HEIGHT; y++)
		{
			memset(&screen_buf[y * (BADGE_EINK_WIDTH/8)], (y&1) ? 0x55 : 0xaa, (BADGE_EINK_WIDTH/8));
		}

		badge_eink_display(screen_buf, (1 << DISPLAY_FLAG_LUT_BIT));
	}

	/* draw text with 16px font */
	const char *line_1 =
		"esp-idf supports compiling multiple files in parallel, "
		"so all of the above commands can be run as `make -jN` "
		"where `N` is the number of parallel make processes to "
		"run (generally N should be equal to or one more than "
		"the number of CPU cores in your system.)";

	int pos = 0;
	int row = 8;
	while (line_1[pos]) {
		int num =
			draw_font(screen_buf, 16, row, BADGE_EINK_WIDTH-32, &line_1[pos], FONT_16PX | FONT_INVERT | FONT_FULL_WIDTH);
		if (num == 0)
			break;
		pos += num;
		row += 16;
	}
	draw_font(screen_buf, 16, row, BADGE_EINK_WIDTH-32, "", FONT_16PX | FONT_INVERT | FONT_FULL_WIDTH);

	draw_font(screen_buf, 0, 120, BADGE_EINK_WIDTH, " Just a status line. Wifi status: not connected", FONT_FULL_WIDTH);

	badge_eink_display(screen_buf, (1 << DISPLAY_FLAG_LUT_BIT));

	// wait for random keypress
	// uint32_t buttons_down = 0;
	// while ((buttons_down & 0xffff) == 0)
	// 	xQueueReceive(evt_queue, &buttons_down, portMAX_DELAY);

	vTaskDelay(1000/portTICK_PERIOD_MS);
}
