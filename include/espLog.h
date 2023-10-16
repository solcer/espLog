#ifndef __ESP_LOG_H_
#define __ESP_LOG_H_

#include "esp_timer.h"

typedef enum
{
    LOG_ERROR,
    LOG_WARNING,
    LOG_INFO,
    LOG_DEBUG
} LogLevel;

#ifndef LOG_LEVEL
#define LOG_LEVEL LOG_DEBUG
#endif

#define LOG_COLOR_RED "\x1b[31m"
#define LOG_COLOR_YELLOW "\x1b[33m"
#define LOG_COLOR_GREEN "\x1b[32m"
#define LOG_COLOR_RESET "\x1b[0m"
extern const char *log_level_strings[];

#define log_message(log_level, fmt, ...)                                                                                                        \
    do                                                                                                                                          \
    {                                                                                                                                           \
        int64_t current_time = esp_timer_get_time() / 1000;                                                                                     \
        printf("[%lld] [%s] %s() [%s:%d]: " fmt "\n", current_time, log_level_strings[log_level], __func__, __FILE__, __LINE__, ##__VA_ARGS__); \
    } while (0)

#endif // __ESP_LOG_H_
