/***************************************************************************//**
* File Name: cycfg_gatt_db.c
* Version: 2.20
*
* Description:
* BLE device's GATT database and device configuration.
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

#include "cycfg_gatt_db.h"
#include "wiced_bt_uuid.h"
#include "wiced_bt_gatt.h"

/*************************************************************************************
* GATT server definitions
*************************************************************************************/

const uint8_t gatt_database[] = 
{
    /* Primary Service: Generic Access */
    PRIMARY_SERVICE_UUID16 (HDLS_GAP, __UUID_SERVICE_GENERIC_ACCESS),
        /* Characteristic: Device Name */
        CHARACTERISTIC_UUID16 (HDLC_GAP_DEVICE_NAME, HDLC_GAP_DEVICE_NAME_VALUE, __UUID_CHARACTERISTIC_DEVICE_NAME, LEGATTDB_CHAR_PROP_READ, LEGATTDB_PERM_READABLE),
        /* Characteristic: Appearance */
        CHARACTERISTIC_UUID16 (HDLC_GAP_APPEARANCE, HDLC_GAP_APPEARANCE_VALUE, __UUID_CHARACTERISTIC_APPEARANCE, LEGATTDB_CHAR_PROP_READ, LEGATTDB_PERM_READABLE),

    /* Primary Service: Generic Attribute */
    PRIMARY_SERVICE_UUID16 (HDLS_GATT, __UUID_SERVICE_GENERIC_ATTRIBUTE),
};

/* Length of the GATT database */
const uint16_t gatt_database_len = sizeof(gatt_database);

/*************************************************************************************
 * GATT Initial Value Arrays
 ************************************************************************************/
 
uint8_t app_gap_device_name[] = {'c', 'h', 'a', 'n', 'g', 'e', '_', 'm', 'e', };
uint8_t app_gap_appearance[]  = {0x00, 0x00, };
 
 /************************************************************************************
 * GATT Lookup Table
 ************************************************************************************/
 
gatt_db_lookup_table_t app_gatt_db_ext_attr_tbl[] =
{
    /* { attribute handle,  maxlen, curlen, attribute data } */
    { HDLC_GAP_DEVICE_NAME_VALUE, 9,      9,      app_gap_device_name },
    { HDLC_GAP_APPEARANCE_VALUE, 2,      2,      app_gap_appearance },
};

/* Number of Lookup Table entries */
const uint16_t app_gatt_db_ext_attr_tbl_size = (sizeof(app_gatt_db_ext_attr_tbl) / sizeof(gatt_db_lookup_table_t));

/* Number of GATT initial value arrays entries */
const uint16_t app_gap_device_name_len = (sizeof(app_gap_device_name));
const uint16_t app_gap_appearance_len = (sizeof(app_gap_appearance));

