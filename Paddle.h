#pragma once

class Paddle
{
private:
    float posX, posY;
    int speed;
    float width, height;

public:
    Paddle(float posX, float posY, int speed);

    void draw();

    void update();

    inline float GetHeight() const {return height;}
};