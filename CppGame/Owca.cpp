#include "stdio.h"
#include "Owca.h"
#include "Funkcje.h"
#include <conio.h>
#include <iostream>
using namespace std;



Owca::Owca(int _x, int _y)
{
	x = _x;
	y = _y;
	sila = 4;
	inicjatywa = 4;
	znak = 'o';
	wiek = 0;

}

void Owca::rysowanie(){

	gotoxy(x, y);

	printf("%c", znak);


}
void Owca::kolizja(Zwierze *drugi, Swiat *zamieszkaly){

     if(drugi->getSila() >= this->getSila()){
                        gotoxy(23,13);
                        std::cout << drugi->znak << " zabija owce";
                        umarlwWalce = true;
                }

                else {gotoxy(23,13);
                std::cout << "Owca zabija " << drugi->znak;}


}
