#
# Copyright (C) 2022-2023 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from zeus device
$(call inherit-product, device/xiaomi/zeus/device.mk)

# Inherit from common lineage configuration
TARGET_DISABLE_EPPE := true
$(call inherit-product, vendor/aosp/config/common_full_phone.mk)

TARGET_BOOT_ANIMATION_RES := 1080
TARGET_GAPPS_ARCH := arm64
FACE_UNLOCK_SUPPORTED := true
TARGET_INCLUDE_LIVE_WALLPAPERS := true
TARGET_SUPPORTS_QUICK_TAP := true
TARGET_HAS_UDFPS := true
EXTRA_UDFPS_ANIMATIONS := true
PEX_BUILD_TYPE := UNOFFICIAL

# Product Info
PRODUCT_NAME := aosp_zeus
PRODUCT_DEVICE := zeus
PRODUCT_MANUFACTURER := Xiaomi
PRODUCT_BRAND := Xiaomi
PRODUCT_MODEL := 2201122G

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi
