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

    void changeDirection();

    inline float GetPosY() const { return posY; }
    inline Vector2 GetCenter() const { return Vector2{posX, posY}; }
    inline int GetRadius() const {return radius;}
};