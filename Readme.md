# Cmake Template

Simple C++ project template that uses cmake and cmakes ability to fetch libraries from github.

## Structure
- main.cpp - uses both external libraries and local libraries
- CMakeLists.txt - main configuration file for cmake
- Lib/Log.h - header file for local library
- Lib/Log.cpp - implementation file for local library
- .gitignore - a gitignore file

The local Log-library uses external library SPDLOG.
The main.cpp sets up a window using external library RAYLIB.
