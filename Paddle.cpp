#include "Paddle.h"
#include <raylib.h>

Paddle::Paddle(float posX, float posY, int speed)
{
    this->posX = posX;
    this->posY = posY;
    this->speed = speed;

    width = 25;
    height = 120;
}

void Paddle::draw()
{
    DrawRectangle(posX, posY, width, height, BLACK);
}

void Paddle::update()
{
    if (IsKeyDown(KEY_W))
    {
        posY -= speed;
    }
    else if (IsKeyDown(KEY_S))
    {
        posY += speed;
    }

    if (posY <=0 )
    {
        posY=0;
    }
    else if (posY >= GetScreenHeight()- height)
    {
        posY =  GetScreenHeight()- height;
    }
    

}
