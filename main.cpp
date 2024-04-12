#include <iostream>
#include <raylib.h>
#include "Ball.h"
#include "Paddle.h"

using namespace std;

int main()
{
    const int windowHeight = 720;
    const int windowWidth = 1280;
    Ball ball = Ball(windowWidth/2, windowHeight/2, 20 );
    Paddle paddle = Paddle(0, (windowHeight - paddle.get_height()) / 2, 7 );
    
    InitWindow(windowWidth, windowHeight, "Moja pierwsza gra.");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ball.update();
        paddle.update();

        ClearBackground(RAYWHITE);

        DrawLine(windowWidth /2, 0, windowWidth/2,windowHeight, BLACK);

        ball.draw();

        paddle.draw();

        EndDrawing();
    }
    
    CloseWindow();

    return 0;
}