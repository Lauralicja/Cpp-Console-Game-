#include "stdio.h"
#include "Zolw.h"
#include "Funkcje.h"
#include <conio.h>
#include <iostream>
using namespace std;



Zolw::Zolw(int _x, int _y)
{
	x = _x;
	y = _y;
	sila = 2;
	inicjatywa = 1;
	znak = 'z';
	wiek = 0;

}

void Zolw::rysowanie(){

	gotoxy(x, y);

	printf("%c", znak);


}
void Zolw::kolizja(Zwierze *drugi, Swiat *zamieszkaly){





}
