#include <stdio.h>
#include<freertos/FreeRTOS.h>
#include<freertos/task.h>
#include<esp_log.h>
void app_main(void)
{
    char *ourTask=pcTaskGetName(NULL);
    ESP_LOGI(ourTask,"Hello starting up\n");
    while (1){
        vTaskDelay(1000);
    }
}
