#include <string.h>

#include "sdkconfig.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "event_queue.h"

#include "badge_pins.h"
#include "badge_leds.h"

#ifdef PIN_NUM_LEDS
void demo_leds(void)
{
	uint8_t rgbw[6*4] = {
		 84,  168,  255, 1,
		 168,  255,  168, 1,
		 255,  168,  84, 1,
		 168,  84,   0, 1,
		 84,   0,  84, 1,
		  0,  84,  168, 1,
	};
	int8_t dir[6*4] = {
		+1, +1, -1, 0,
		+1, -1, -1, 0,
		-1, -1, -1, 0,
		-1, -1, +1, 0,
		-1, +1, +1, 0,
		+1, +1, +1, 0,
	};

	int lelijk = 0;

	while (lelijk < 1024) {
		// exit on random keypress
		uint32_t buttons_down = 0;
		if (xQueueReceive(evt_queue, &buttons_down, 10 / portTICK_RATE_MS))
		{
			if (buttons_down & 0xffff)
				break;
		}

		badge_leds_set_state(rgbw);

		int i;
		for (i=0; i<6*4; i++) {
			rgbw[i] += dir[i];
			if (rgbw[i] == 0)
				dir[i] = +1;
			if (rgbw[i] == 63)
				dir[i] = -1;
		}
		lelijk++;
	}

	memset(rgbw, 0, sizeof(rgbw));
	badge_leds_set_state(rgbw);
}

void glow_leds(void)
{
	uint8_t rgbw[6*4] = {
		 0,  0,  0, 1,
		 0,  0,  0, 1,
		 0,  0,  0, 1,
		 0,  0,  0, 1,
		 0,  0,  0, 1,
		 0,  0,  0, 1,
	};

	int8_t glow[6] = {
		1,
		2,
		3,
		3,
		2,
		1
	};

	int lelijk = 0;

	while (lelijk < 255) {
		// exit on random keypress
		uint32_t buttons_down = 0;
		if (xQueueReceive(evt_queue, &buttons_down, 10 / portTICK_RATE_MS))
		{
			if (buttons_down & 0xffff)
				break;
		}

		badge_leds_set_state(rgbw);

		int i;
		for (i=0; i<6*4; i+=4) {
			int meuk = rgbw[i];
			meuk += glow[i/4];
			if (meuk > 255)
				meuk = 255;
			rgbw[i] = meuk;
		}
		lelijk++;
	}

	while (lelijk >= 0) {
		// exit on random keypress
		uint32_t buttons_down = 0;
		if (xQueueReceive(evt_queue, &buttons_down, 10 / portTICK_RATE_MS))
		{
			if (buttons_down & 0xffff)
				break;
		}

		badge_leds_set_state(rgbw);

		int i;
		for (i=0; i<6*4; i+=4) {
			rgbw[i] -= 1;
		}
		lelijk--;
	}

	memset(rgbw, 0, sizeof(rgbw));
	badge_leds_set_state(rgbw);
}
#endif // PIN_NUM_LEDS
