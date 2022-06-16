/**
 * @file test_sendSavedMetrics.cpp
 * @author Toba Adesanya
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>

#define MAX_METRICS_TO_PUBLISH_PER_LOOP 15
#define MAX_COUNTER_VALUE 9999

char last_published_metric[20] = "met1234567890_1";
const char metric_saved[][20] = {"met1234567890_1", "met1234567890_2", "met1234567890_3","met1234567890_4",
                                "met1234567890_5", "met2234567890_1", "met3234567890_1", "met4234567890_1",
                                "met5234567890_1", "met5234567890_2","met6234567890_1", "met7234567890_1",
                                "met7234567890_9999"};

uint8_t sendSavedMetrics(const char* last_saved_metric)
{
    // GXFileHandle file_handle(spiFlash, filesys);

    // Variables to hold Event timestamps
    uint32_t last_published_ts, last_saved_ts;
    uint16_t last_published_idx, last_saved_idx;
    uint8_t num_metrics_published = 0;
    
    int cnt = 0;

    printf("In sendSavedMetrics...\n");

    // Extract timestamp information from Event file name
    sscanf(last_published_metric, "met%u_%hu", &last_published_ts, &last_published_idx);
    sscanf(last_saved_metric, "met%u_%hu", &last_saved_ts, &last_saved_idx);
    printf("Last published metric timestamp and index: %u, %d\n", last_published_ts, last_published_idx);
    printf("Last saved metric timestamp and index: %u, %d\n", last_saved_ts, last_saved_idx);


    // if last_published_ts timestamp is less than last_saved_ts, then we have saved metrics to send
    if (last_published_ts > last_saved_ts)
    {
        printf("All saved Events have been published.\n");
        return -1; // SPIFFS_RET::SPIFFS_NO_SAVED_EVENTS_TO_PUBLISH;
    }

    // Open root directory and iterate through files
    // spiffs_DIR dir;
    // spiffs_dirent GXMetric;
    // filesys->opendir(NULL, &dir);

    // while (filesys->readdir(&dir, &GXMetric))
    while(metric_saved[cnt] && cnt < sizeof(metric_saved) / sizeof(metric_saved[cnt]))
    {
        if (num_metrics_published >= MAX_METRICS_TO_PUBLISH_PER_LOOP)
        {
            printf("Maximum number (%u) of saved events have been published in this loop\n", num_metrics_published);
            return -2; // SPIFFS_RET::SPIFFS_MAX_SAVED_EVENTS_PUBLISHED;
        }

        unsigned long metrics_ts; uint16_t metrics_idx;
        if (sscanf((const char *)metric_saved[cnt], "met%lu_%hu", &metrics_ts, &metrics_idx) == 2)
        {
            // Compare the timestamp of last published metric to every metric saved on flash
            if (last_published_ts < metrics_ts || last_published_idx < metrics_idx || last_published_idx == MAX_COUNTER_VALUE)
            {
                printf("Getting information for %s\n", (const char *)metric_saved[cnt]);

                // // Read the metric file from the flash
                // String metric_to_publish = readGXMetrics((const char*)GXMetric.name);
                // if (metric_to_publish == String(SPIFFS_FAIL))
                // {
                //     spiffslog.error("Metric empty or corrupted");
                //     return SPIFFS_FAIL;
                // }

                printf("Publishing metric '%s' from flash..\n", (const char *)metric_saved[cnt]);
                // Particle.publish("gx_metrics", metric_to_publish, PRIVATE, WITH_ACK);

                // Update the last_published_metric variable and in EEPROM
                strncpy(last_published_metric, (const char *)metric_saved[cnt], strlen((const char *)metric_saved[cnt]));
                printf("Updated last published metric: %s\n\n", last_published_metric);
                // EEPROM.put(EEPROM_ADDR_LAST_PUBL_METRIC, last_published_metric);
                num_metrics_published++;

                // Add delay when sending multiple metrics
                // delay(1010);

                // Call this again because 'readGXMetrics' closes SPI1 when it returns
                // spiFlash->begin();
            }
        }
        cnt++;
    }
    // filesys->closedir(&dir);
    return 0;
}

int main()
{
    printf("Starting test...\n");
    sendSavedMetrics("met1234567890_1");
    return 0;
}