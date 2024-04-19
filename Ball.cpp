#include "Ball.h"
#include <raylib.h>


Ball::Ball(float posX, float posY, int radius)
{
    speedX = 7;
    speedY = 7;
    this->posX = posX;
    this->posY = posY;
    this->radius = radius;
}

void Ball::draw()
{
    DrawCircle(posX, posY, radius, BLACK);
}

void Ball::changeDirection()
{
    speedX *= -1;
}

void Ball::update()
{
    posX += speedX;
    posY += speedY;

    if(posY + radius >= GetScreenHeight() || posY - radius <=0 )
    {
        speedY *= -1;
    }
    if(posX + radius >= GetScreenWidth() || posX - radius <=0 )
    {
        speedX *= -1;
    }


}
