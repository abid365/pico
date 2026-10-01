#include <stdio.h>
#include "pico/stdlib.h"

// GP25 is the onboard LED on standard non-wireless Pico
#define LED_PIN 25

int main(void) {
    // Initialize standard I/O
    stdio_init_all();

    // Initialize the GPIO pin and set as output
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (1) {
        gpio_put(LED_PIN, 1);
        sleep_ms(500);

        gpio_put(LED_PIN, 0);
        sleep_ms(500);
    }

    return 0;
}