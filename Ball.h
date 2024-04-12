#pragma once

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
};