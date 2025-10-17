#include <stdio.h>
#include <pico/stdlib.h>
#include <pico/sync.h>
#include <math.h>


#define DELAY_MS 100
#define IN_PIN 6
#define OUT_PIN 7
#define N 10000


int toggle = 1;
bool timer_callback(__unused struct repeating_timer *t)
{
    toggle = !toggle;
    gpio_put(OUT_PIN, toggle);

    for (int i = 0; i < N; i++) 
            for (int j = 0; j < N; j++) 
                for (int k = 1; k < N; k++) 
                    sqrt((float) i);

    return true;
}

int main(void)
{
    stdio_init_all();
    // Create a repeating timer that calls timer_callback.
    // If the delay is > 0 then this is the delay between the previous
    // callback ending and the next starting.
    // If the delay is negative (see below) then the next call to the
    // callback will be exactly 500ms after the start of the call to
    // the last callback
    repeating_timer_t timer;
    gpio_init(OUT_PIN);
    gpio_set_dir(OUT_PIN, GPIO_OUT);
    gpio_put(OUT_PIN, toggle);

    add_repeating_timer_ms(-DELAY_MS, timer_callback, NULL, &timer);
    while(1) __nop();
    return 0;
}
