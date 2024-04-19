#include <iostream>
#include <raylib.h>
#include "Ball.h"
#include "Paddle.h"
#include "CPUPaddle.h"

using namespace std;
int playerScore = 0;
int cpuScore = 0;

int main()
{
    const int windowHeight = 720;
    const int windowWidth = 1280;
    const int offset = 20;

    InitWindow(windowWidth, windowHeight, "Moja pierwsza gra.");
    SetTargetFPS(60);

    Ball ball = Ball(windowWidth / 2, windowHeight / 2, 20);

    Paddle playerPaddle = Paddle(0, (GetScreenHeight() - playerPaddle.GetHeight()) / 2, 7);
    float cpuPaddleWidth = playerPaddle.GetWidth();
    CPUPaddle cpuPaddle = CPUPaddle(GetScreenWidth() - cpuPaddleWidth,
                                    (GetScreenHeight() - cpuPaddle.GetHeight()) / 2, 7);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ball.ReactOnCollisionWith(playerPaddle.GetPaddleRectangle());
        ball.ReactOnCollisionWith(cpuPaddle.GetPaddleRectangle());
        ball.update();
        playerPaddle.update();
        cpuPaddle.update(ball.GetPosY());

        if( ball.GetPosX() + ball.GetRadius() > GetScreenWidth() )
        {
            playerScore ++;
            ball.reset();
        }
        else if (ball.GetPosX() - ball.GetRadius() < 0 )
        {
            cpuScore ++ ;
            ball.reset();
        }

        ClearBackground(RAYWHITE);

        DrawLine(windowWidth / 2, 0, windowWidth / 2, windowHeight, BLACK);

        ball.draw();
        playerPaddle.draw();
        cpuPaddle.draw();

        DrawText(TextFormat("%i", cpuScore), 0.75 * GetScreenWidth() -offset, 
        offset, 80 , BLACK );
        
        DrawText(TextFormat("%i", playerScore), 0.25 * GetScreenWidth() - offset, 
        offset, 80 , BLACK );

        EndDrawing();
    }

    CloseWindow();

    return 0;
}