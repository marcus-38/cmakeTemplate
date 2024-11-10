//
// Created by fet on 2024-11-10.
//

#ifndef LOG_H
#define LOG_H

#include <spdlog/spdlog.h>

namespace Core_Logger {
    class Log {
    public:
        static void Init();
        inline static std::shared_ptr<spdlog::logger>& GetLogger() { return s_Logger; }

    private:
        static std::shared_ptr<spdlog::logger> s_Logger;
    };

    #define CORE_TRACE(...)     Log::GetLogger()->trace(__VA_ARGS__)
    #define CORE_INFO(...)      Log::GetLogger()->info(__VA_ARGS__)
    #define CORE_WARN(...)      Log::GetLogger()->warn(__VA_ARGS__)
    #define CORE_ERROR(...)     Log::GetLogger()->error(__VA_ARGS__)
    #define CORE_FATAL(...)     Log::GetLogger()->fatal(__VA_ARGS__)

}


#endif //LOG_H
