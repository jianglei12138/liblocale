//
//  locale_android.h
//  CUPS
//
//  Created by 姜雷 on 16/2/21.
//  Copyright © 2016年 Apple Inc. All rights reserved.
//
#include "locale12138.h"

static pthread_once_t g_locale_once = PTHREAD_ONCE_INIT;
static lconv g_locale;

static void __locale_init() {
    g_locale.decimal_point = const_cast<char*>(".");
    g_locale.thousands_sep = const_cast<char*>("");
}

lconv* localeconv() {
    pthread_once(&g_locale_once, __locale_init);
    return &g_locale;
}