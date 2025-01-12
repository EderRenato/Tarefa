#include "pico/stdlib.h"

#define LED_PIN 13
#define TRACO_TIME 800
#define PONTO_TIME 200
#define INTERVALO1 125
#define INTERVALO2 250

int main()
{
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (true) {
        for (int i = 0; i < 3; i++)
        {
            gpio_put(LED_PIN, true);
            sleep_ms(PONTO_TIME);
            gpio_put(LED_PIN, false);
            if (i != 2){
                sleep_ms(INTERVALO1);
            }
        }
        sleep_ms(INTERVALO2);
        for (int i = 0; i < 3; i++){
            gpio_put(LED_PIN, true);
            sleep_ms(TRACO_TIME);
            gpio_put(LED_PIN, false);
            if (i != 2){
                sleep_ms(INTERVALO1);
            }
        }
        sleep_ms(INTERVALO2);
        for (int i = 0; i < 3; i++)
        {
            gpio_put(LED_PIN, true);
            sleep_ms(PONTO_TIME);
            gpio_put(LED_PIN, false);
            if (i != 2){
                sleep_ms(INTERVALO1);
            }
        }
        sleep_ms(3000);
        
    }
}
