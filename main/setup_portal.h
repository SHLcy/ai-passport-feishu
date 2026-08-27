#pragma once

#include "esp_err.h"

#include <stdbool.h>
#include <stddef.h>

typedef struct {
    char ssid[33];
    char address[16];
} setup_portal_info_t;

esp_err_t setup_portal_start(setup_portal_info_t *info);
bool setup_portal_credentials_received(void);
void setup_portal_stop(void);
