#include "CPUPaddle.h"
#include <raylib.h>

CPUPaddle::CPUPaddle(float posX, float posY, int speed) : Paddle(posX, posY, speed)
{
}

void CPUPaddle::update(int ballY)
{
    if (posY + height/2 > ballY)
    {
        posY -= speed;
    }
    else if (posY +height/2 < ballY)
    {
        posY += speed;
    }

    if (posY <= 0)
    {
        posY = 0;
    }
    else if (posY + height >= GetScreenHeight())
    {
       posY = GetScreenHeight() - height;
    }
}
