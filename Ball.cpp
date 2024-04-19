#include "Ball.h"

Ball::Ball(float posX, float posY, int radius)
{
    speedX = 9;
    speedY = 9;
    this->posX = posX;
    this->posY = posY;
    this->radius = radius;
}

void Ball::draw()
{
    DrawCircle(posX, posY, radius, BLACK);
}

void Ball::update()
{
    posX += speedX;
    posY += speedY;

    if (posY + radius >= GetScreenHeight() || posY - radius <= 0)
    {
        speedY *= -1;
    }
    if (posX + radius >= GetScreenWidth() || posX - radius <= 0)
    {
        speedX *= -1;
    }
}

void Ball::reset()
{
    posX = GetScreenWidth() / 2;
    posY = GetScreenHeight() / 2;
}

void Ball::ReactOnCollisionWith(Rectangle paddleRect)
{
    bool collision = CheckCollisionCircleRec(
        Vector2{posX, posY}, radius, paddleRect);

    if (collision)
    {
        speedX *= -1;
    }
}
