#pragma once

class Paddle
{
private:
    float posX, posY;
    float width, height;
    int speed;

public:
    Paddle(float posX, float posY, int speed);

    void draw();

    void update();

    inline float get_width() const { return width;} 

    inline float get_height() const { return height;} 
};