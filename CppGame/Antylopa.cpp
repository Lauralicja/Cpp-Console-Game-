#include "stdio.h"
#include "Antylopa.h"
#include "Funkcje.h"
#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;



Antylopa::Antylopa(int _x, int _y)
{
	x = _x;
	y = _y;
	sila = 4;
	inicjatywa = 4;
	znak = 'a';
	wiek = 0;
}

void Antylopa::rysowanie(){

	gotoxy(x, y);

	printf("%c", znak);


}
void Antylopa::kolizja(Zwierze *drugie, Swiat *zamieszkaly){

int mozeUciekne = rand() % 2;
if(mozeUciekne == 0 ){

                 if(drugie->getSila() >= this->getSila()){
                        gotoxy(23,10);
                        std::cout << drugie->znak << " zabija antylope";
                        umarlwWalce = true;
                }

                else {gotoxy(23,10);
                std::cout << "Antylopa zabija " << drugie->znak;}
}
else {
    umarlwWalce = false;
    this->setX(getX() + 2);
    this->setY(getY() + 2);
}


}
