/*
 * Copyright (C) 2016 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

#include <string.h>
#include <stdint.h>

#define BTM_DEF_LOCAL_NAME "Moto G5 Plus"

#ifdef __cplusplus
extern "C" {
#endif
int32_t property_get_int32(const char *key, int32_t default_value);
#ifdef __cplusplus
}
#endif

#define BLUETOOTH_QTI_SW TRUE
#define MAX_ACL_CONNECTIONS   16
#define MAX_L2CAP_CHANNELS    16
#define BLE_VND_INCLUDED TRUE
#define BT_CLEAN_TURN_ON_DISABLED TRUE
#define BTM_WBS_INCLUDED TRUE
#define BTIF_HF_WBS_PREFERRED TRUE
#define BTM_SCO_ENHANCED_SYNC_ENABLED FALSE
#endif
