#include <iostream>
#include <raylib.h>
#include "Lib/Log.h"

using namespace Core_Logger;

int main()
{
    Log::Init();
    CORE_INFO("Initialized Log!");
    CORE_INFO("Updated CMakeLists.txt to download dependencies...");

    constexpr int screenWidth = 1280;
    constexpr int screenHeight = 768;
    const char *windowTitle = "Example Window";
    const char *message = "Use cmake to download libraries.";
    constexpr int fontSize = 40;
    constexpr float msgSpacing = 1.5f;

    InitWindow(screenWidth, screenHeight, windowTitle);
    SetTargetFPS(60);
    const Font font = GetFontDefault();
    const Vector2 msgSize = MeasureTextEx(font, message, fontSize, msgSpacing);
    const Vector2 msgPos = Vector2{(screenWidth - msgSize.x) / 2, (screenHeight - msgSize.y) / 2};

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawTextEx(font, message, msgPos, fontSize, msgSpacing, RED);
        EndDrawing();
    }

    CloseWindow();
    CORE_INFO("Closing down...");


    return 0;
}
