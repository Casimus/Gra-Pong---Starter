#pragma once
#include <raylib.h>
class Paddle
{
protected:
    float posX, posY;
    int speed;
    float width, height;

public:
    Paddle(float posX, float posY, int speed);

    void draw();

    void update();

    inline float GetHeight() const {return height;}
    inline float GetWidth() const {return width;}
    inline Rectangle GetRect() const {return Rectangle{posX , posY, width, height};}
};