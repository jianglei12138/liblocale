LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)


LOCAL_SRC_FILES:= \
    locale.cpp

LOCAL_C_INCLUDES += \
    $(LOCAL_PATH)/

LOCAL_MODULE:= locale

#include $(BUILD_STATIC_LIBRARY)
include $(BUILD_SHARED_LIBRARY)