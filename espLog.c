#include <stdio.h>
#include "espLog.h"

const char* log_level_strings[] = { \
    LOG_COLOR_RED "ERROR" LOG_COLOR_RESET, \
    LOG_COLOR_YELLOW "WARNING" LOG_COLOR_RESET, \
    LOG_COLOR_GREEN "INFO" LOG_COLOR_RESET, \
    "DEBUG" \
};

