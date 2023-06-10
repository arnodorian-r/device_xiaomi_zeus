/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>
#include <libinit_utils.h>

#include "vendor_init.h"

#define FINGERPRINT_GL "Xiaomi/zeus_global/zeus:13/SKQ1.220303.001/V14.0.7.0.TLBMIXM:user/release-keys"
#define FINGERPRINT_CN "Xiaomi/zeus/zeus:13/SKQ1.220303.001/V13.2.7.0.TLBCNXM:user/release-keys"
#define FINGERPRINT_IN "Xiaomi/zeus_in/zeus:13/SKQ1.220303.001/V14.0.2.0.TLBMIXM:user/release-keys"

static const variant_info_t zeus_global_info = {
    .hwc_value = "GL",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "zeus",
    .marketname = "Xiaomi 12 Pro",
    .model = "2201122G",
    .mod_device = "zeus_global",
    .build_fingerprint = FINGERPRINT_GL,
};

static const variant_info_t zeusin_info = {
    .hwc_value = "IN",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "zeus",
    .marketname = "Xiaomi 12 Pro",
    .model = "2201122G",
    .mod_device = "zeus_in",
    .build_fingerprint = FINGERPRINT_IN,
};

static const variant_info_t zeus_info = {
    .hwc_value = "CN",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "zeus",
    .marketname = "Xiaomi 12 Pro",
    .model = "2201122C",
    .mod_device = "zeus",
    .build_fingerprint = FINGERPRINT_CN,
};

static const std::vector<variant_info_t> variants = {
    zeus_global_info,
    zeusin_info,
    zeus_info,
};

void vendor_load_properties() {
    set_dalvik_heap();
    search_variant(variants);

    // SafetyNet workaround
    property_override("ro.boot.verifiedbootstate", "green");
}
