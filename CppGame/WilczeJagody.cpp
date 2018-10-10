#include "stdio.h"
#include "WilczeJagody.h"
#include "Funkcje.h"
#include <conio.h>
#include <iostream>
using namespace std;



WilczeJagody::WilczeJagody(int _x, int _y)
{
	x = _x;
	y = _y;
	sila = 99;
	inicjatywa = 0;
	znak = '"';
	wiek = 0;
}

void WilczeJagody::rysowanie(){

	gotoxy(x, y);

	printf("%c", znak);


}
