cmake_minimum_required(VERSION 3.29)
project(cmakeTemplate)
set(CMAKE_CXX_STANDARD 20)

# dependencies
include(FetchContent)

set(RAYLIB_VERSION 4.5.0)
FetchContent_Declare(
        raylib
        URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
        FIND_PACKAGE_ARGS ${RAYLIB_VERSION}
)

set(SPDLOG_VERSION 1.15.0)
FetchContent_Declare(
        spdlog
        URL https://github.com/gabime/spdlog/archive/refs/tags/v${SPDLOG_VERSION}.tar.gz
        FIND_PACKAGE_ARGS ${SPDLOG_VERSION}
)
set(BUILD_EXAMPLES OFF CACHE INTERNAL "")
FetchContent_MakeAvailable(raylib)
FetchContent_MakeAvailable(spdlog)

# project
set(SOURCE_FILES
    Lib/Log.cpp Lib/Log.h
        main.cpp
)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)
target_link_libraries(${PROJECT_NAME} PRIVATE spdlog::spdlog)

