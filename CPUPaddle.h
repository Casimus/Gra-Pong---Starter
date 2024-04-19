#pragma once
#include "Paddle.h"

class CPUPaddle : public Paddle
{

public:
    CPUPaddle(float posX, float posY, int speed);

    void update(int ballY);
};