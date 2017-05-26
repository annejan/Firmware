#include "demo_music.h"
#include "esp_event.h"
#include "esp_event_loop.h"
#include "esp_system.h"
#include "sdkconfig.h"
#include "badge_pins.h"
#include <stdint.h>
#include <stdbool.h>
#include "badge_portexp.h"

void
musicRoutine(void) {

  bool buzz = false;

  while (1) {
    // buzz = !buzz;
		#ifdef PORTEXP_PIN_NUM_LEDS
	  badge_portexp_set_output_state(PORTEXP_PIN_NUM_VIBRATOR, buzz);
		#endif
    if (buzz) {
      ets_delay_us(500);
    } else {
      ets_delay_us(1500);
    }
  }
}
