#include <iostream>
#include <raylib.h>

using namespace std;

int main()
{
    const int windowHeight = 720;
    const int windowWidth = 1280;
    
    InitWindow(windowWidth, windowHeight, "Moja pierwsza gra.");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawLine(windowWidth /2, 0, windowWidth/2,windowHeight, BLACK);

        DrawCircle(windowWidth/2, windowHeight/2, 20, BLACK);


        DrawRectangle(10, windowHeight/2 - 60, 25, 120, BLACK );

        DrawRectangle(windowWidth - 35 , windowHeight/2 - 60, 25, 120, BLACK );

        EndDrawing();
    }
    

    return 0;
}