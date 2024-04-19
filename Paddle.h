#pragma once
#include <raylib.h>

class Paddle
{
protected:
    float posX, posY;
    int speed;
    float width{25}, height{120};

public:
    
    
    Paddle(float posX, float posY, int speed);

    void draw();

    void update();

    Rectangle GetPaddleRectangle( );

    inline float GetHeight() const {return height;}
    inline float GetWidth() const {return width;}
};