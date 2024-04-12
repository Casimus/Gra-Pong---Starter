#include <iostream>
#include <raylib.h>
#include "Ball.h"
#include "Paddle.h"

using namespace std;

int main()
{
    const int windowHeight = 720;
    const int windowWidth = 1280;
    
    InitWindow(windowWidth, windowHeight, "Moja pierwsza gra.");
    SetTargetFPS(60);
    Ball ball = Ball(windowWidth/2, windowHeight/2, 20);

    Paddle playerPaddle = Paddle(0, (GetScreenHeight() - playerPaddle.GetHeight())/2, 7);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ball.update();
        playerPaddle.update();
        ClearBackground(RAYWHITE);

        DrawLine(windowWidth /2, 0, windowWidth/2,windowHeight, BLACK);

        ball.draw();
        playerPaddle.draw();


        EndDrawing();
    }
    
    CloseWindow();

    return 0;
}