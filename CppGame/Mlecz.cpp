#include "stdio.h"
#include "Mlecz.h"
#include "Funkcje.h"
#include <conio.h>
#include <iostream>
using namespace std;



Mlecz::Mlecz(int _x, int _y)
{
	x = _x;
	y = _y;
	sila = 0;
	inicjatywa = 0;
	znak = '*';
	wiek = 0;
}

void Mlecz::rysowanie(){

	gotoxy(x, y);

	printf("%c", znak);


}

