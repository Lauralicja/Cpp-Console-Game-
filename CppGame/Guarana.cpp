#include "stdio.h"
#include "Guarana.h"
#include "Funkcje.h"
#include <conio.h>
#include <iostream>
using namespace std;



Guarana::Guarana(int _x, int _y)
{
	x = _x;
	y = _y;
	sila = 0;
	inicjatywa = 0;
	znak = ':';
	wiek = 0;
}

void Guarana::rysowanie(){

	gotoxy(x, y);

	printf("%c", znak);


}

