#include <stdio.h>
#include <pico/stdlib.h>
#include <math.h>



#define DELAY_MS 100
#define IN_PIN 6
#define OUT_PIN 7
#define N 10000

int main(void)
{
    int toggle = 0;
    stdio_init_all();
    gpio_init(OUT_PIN);
    gpio_set_dir(OUT_PIN, GPIO_OUT);
    gpio_put(OUT_PIN, toggle);

    while (true) {
        toggle = !toggle;
        gpio_put(OUT_PIN, toggle);

         for (int i = 0; i < N; i++) 
            for (int j = 0; j < N; j++) 
                for (int k = 1; k < N; k++) 
                    sqrt((float) i);

        sleep_ms(DELAY_MS);
    }
}
