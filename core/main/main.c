#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

void app_main(void)
{
    gpio_set_direction(2, GPIO_MODE_OUTPUT);
    int isOn = 0;
    while (true)
    {
        isOn = !isOn;
        gpio_set_level(2, isOn);
        printf("blink %d\n", isOn);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}