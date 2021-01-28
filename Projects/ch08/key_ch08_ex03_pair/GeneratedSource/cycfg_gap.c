/***************************************************************************//**
* File Name: cycfg_gap.c
* Version: 2.20
*
* Description:
* BLE device's GAP configuration.
* This file should not be modified. It was automatically generated by
* Bluetooth Configurator 2.20.0.3018
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#include "cycfg_gap.h"

/* Device address */
const wiced_bt_device_address_t cy_bt_device_address = {0x00, 0xA0, 0x50, 0x00, 0x00, 0x00};

/* Device name */
const uint8_t cy_bt_device_name[] = {'k', 'e', 'y', '_', 'p', 'a', 'i', 'r', '\0'};

const uint8_t cy_bt_adv_packet_elem_0[1] = { 0x06 };
const uint8_t cy_bt_adv_packet_elem_1[8] = { 0x6B, 0x65, 0x79, 0x5F, 0x70, 0x61, 0x69, 0x72 };
wiced_bt_ble_advert_elem_t cy_bt_adv_packet_data[] = 
{
    /* Flags */
    {
        .advert_type = BTM_BLE_ADVERT_TYPE_FLAG, 
        .len = 1, 
        .p_data = (uint8_t*)cy_bt_adv_packet_elem_0, 
    },
    /* Complete local name */
    {
        .advert_type = BTM_BLE_ADVERT_TYPE_NAME_COMPLETE, 
        .len = 8, 
        .p_data = (uint8_t*)cy_bt_adv_packet_elem_1, 
    },
};
wiced_bt_ble_advert_elem_t cy_bt_scan_resp_packet_data[] = 
{
};

