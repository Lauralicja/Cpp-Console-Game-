#include "stdio.h"
#include "Wilk.h"
#include "Funkcje.h"
#include <conio.h>
#include <iostream>
using namespace std;



Wilk::Wilk(int _x, int _y)
{
	x = _x;
	y = _y;
	sila = 9;
	inicjatywa = 5;
	znak = 'w';
	wiek = 0;
}

void Wilk::rysowanie(){

	gotoxy(x, y);

	printf("%c", znak);


}
void Wilk::kolizja(Zwierze *drugi, Swiat *zamieszkaly){

   if(drugi->getSila() >= this->getSila()){
                        gotoxy(23,14);
                        std::cout << drugi->znak << " zabija wilka";
                        umarlwWalce = true;
                }

                else {gotoxy(23,14);
                std::cout << "Wilk zabija " << drugi->znak;}


}
