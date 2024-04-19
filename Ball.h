#pragma once
#include <raylib.h>
class Ball
{
private:
    float posX, posY;
    int speedX, speedY;
    int radius;

public:
    Ball(float posX, float posY, int radius);

    void draw();

    void update();

    void reset();

    void ReactOnCollisionWith(Rectangle paddleRect);
    
    inline float GetPosX() const {return posX;}
    inline float GetPosY() const {return posY;}
    inline int GetRadius() const {return radius;}
};