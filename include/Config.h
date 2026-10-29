#pragma once

#if __has_include("config.local.h")
#define CONFIG_USING_LOCAL 1
#include "config.local.h"
#else
#define CONFIG_USING_LOCAL 0
#include "config.example.h"
#endif
