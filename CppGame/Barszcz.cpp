#include "stdio.h"
#include "Barszcz.h"
#include "Funkcje.h"
#include <conio.h>
#include <iostream>
using namespace std;



Barszcz::Barszcz(int _x, int _y)
{
	x = _x;
	y = _y;
	sila = 0;
	inicjatywa = 0;
	znak = 'v';
	wiek = 0;
}

void Barszcz::rysowanie(){

	gotoxy(x, y);

	printf("%c", znak);


}

void Barszcz::kolizja(Zwierze *drugie, Swiat *zamieszkaly){
umarlwWalce = false;
}
