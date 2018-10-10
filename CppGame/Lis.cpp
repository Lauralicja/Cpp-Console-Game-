#include "stdio.h"
#include "Lis.h"
#include "Funkcje.h"
#include <conio.h>
#include <iostream>
using namespace std;



Lis::Lis(int _x, int _y)
{
	x = _x;
	y = _y;
	sila = 3;
	inicjatywa = 7;
	znak = 'l';
	wiek = 0;
}

void Lis::rysowanie(){

	gotoxy(x, y);

	printf("%c", znak);


}
void Lis::kolizja(Zwierze *drugi, Swiat *zamieszkaly){



                if(drugi->getSila() >= this->getSila()){
                        gotoxy(23,12);
                        std::cout << drugi->znak << "zabija lisa";
                        umarlwWalce = true;
                }

                else {gotoxy(23,12);
                std::cout << "Lis zabija " << drugi->znak;

                }



}
