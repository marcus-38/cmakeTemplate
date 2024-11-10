//
// Created by fet on 2024-11-10.
//

#include "Log.h"
#include <spdlog/sinks/stdout_color_sinks.h>

namespace Core_Logger {

    std::shared_ptr<spdlog::logger> Log::s_Logger;

    void Log::Init() {
        spdlog::set_pattern("%^[%T] %n: %v%$");
        s_Logger = spdlog::stdout_color_mt("CORE");
    }

}
