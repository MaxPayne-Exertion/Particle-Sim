#include "raylib.h"

int main(void)
{
    // Initialization
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "particle");

    SetTargetFPS(60);



    while (!WindowShouldClose())
    {

        BeginDrawing();

        ClearBackground(BLACK);

        DrawText("TEST", 10,10 ,20 , WHITE);
        DrawFPS(10, 40);

        EndDrawing();

    }


    CloseWindow();
    return 0;
}
