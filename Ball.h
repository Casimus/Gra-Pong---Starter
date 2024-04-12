#pragma once

class Ball
{

private:
    float posX, posY;
    int speedX, speedY;
    int radius;


public:
/**
 * Konstruktor obiektu klasy Ball 
 * @param posX wspołrzędna x środka piłki 
 * @param posY wspołrzędna y środka piłki
 * @param radius promień pilki
*/
    Ball(float posX, float posY, int radius);

    /**Metoda rysuje piłkę*/
    void draw();

    /**Metoda odświeża pozycje pilki */
    void update();
};