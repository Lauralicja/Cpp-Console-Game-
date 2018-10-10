#include "stdio.h"
#include "Trawa.h"
#include "Funkcje.h"
#include <conio.h>
#include <iostream>
using namespace std;



Trawa::Trawa(int _x, int _y)
{
	x = _x;
	y = _y;
	sila = 0;
	inicjatywa = 0;
	znak = '.';
	wiek = 0;
}

void Trawa::rysowanie(){

	gotoxy(x, y);

	printf("%c", znak);



}
void Trawa::chceZasiac(){

if(czasZasiac == true)
    Trawa *dziecko = new Trawa(this->getX()+1, this->getY()+1);



}
