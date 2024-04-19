#include <iostream>
#include <raylib.h>
#include "Ball.h"
#include "Paddle.h"
#include "CPUPaddle.h"

using namespace std;

int main()
{
    const int windowHeight = 720;
    const int windowWidth = 1280;

    InitWindow(windowWidth, windowHeight, "Moja pierwsza gra.");
    SetTargetFPS(60);
    Ball ball = Ball(windowWidth / 2, windowHeight / 2, 20);

    Paddle playerPaddle = Paddle(0, (GetScreenHeight() - playerPaddle.GetHeight()) / 2, 7);
    int cpuPaddleWidth = playerPaddle.GetWidth();
    CPUPaddle cpuPaddle = CPUPaddle(GetScreenWidth() - cpuPaddleWidth,
                                    (GetScreenHeight() - playerPaddle.GetHeight()) / 2, 7);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        if (CheckCollisionCircleRec(ball.GetCenter(),
                                    ball.GetRadius(),
                                    playerPaddle.GetRect()) )
        {
            ball.changeDirection();
        }
        if (CheckCollisionCircleRec(ball.GetCenter(),
                                    ball.GetRadius(),
                                    cpuPaddle.GetRect()))
        {
            ball.changeDirection();
        }

        ball.update();
        playerPaddle.update();
        cpuPaddle.update(ball.GetPosY());
        ClearBackground(RAYWHITE);

        DrawLine(windowWidth / 2, 0, windowWidth / 2, windowHeight, BLACK);

        ball.draw();
        playerPaddle.draw();
        cpuPaddle.draw();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}