#
# Copyright (C) 2022-2023 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from xiaomi sm8450-common
include device/xiaomi/sm8450-common/BoardConfigCommon.mk

# Inherit from the proprietary version
include vendor/xiaomi/zeus/BoardConfigVendor.mk

DEVICE_PATH := device/xiaomi/zeus

# Init
TARGET_INIT_VENDOR_LIB := //$(DEVICE_PATH):init_xiaomi_zeus
TARGET_RECOVERY_DEVICE_MODULES ?= init_xiaomi_zeus

# Screen density
TARGET_SCREEN_DENSITY := 560
