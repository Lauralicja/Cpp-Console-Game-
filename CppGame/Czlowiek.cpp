#include "Czlowiek.h"
#include "stdio.h"
#include <conio.h>
#include "Funkcje.h"
#include <iostream>
#define UP_ARROW 0x48
#define DOWN_ARROW 0x50
#define LEFT_ARROW 0x4b
#define RIGHT_ARROW 0x4d


using namespace std;

/*
bool Czlowiek::potka(){

if(this->wypilPotke == true) {
    gotoxy(30,1);
    std::cout<< "SUPERMOC!";
    this->setSila(getSila()-1);
    }
}*/


void Czlowiek::akcja(Swiat *zamieszkaly)
{

	char klawisz;
	klawisz = _getch();

	switch (klawisz) {
	case UP_ARROW:
                if(y<=1)
                setY(getY());
                else

		setY(getY() - 1);
		break;
	case DOWN_ARROW:
                if(y>=19)
               setY(getY());
                else
		setY(getY() + 1);
		break;
	case LEFT_ARROW:
                if(x<=1)
               setX(getX());
                else
		setX(getX() - 1);
		break;
	case RIGHT_ARROW:
                if(x>=19)
                setX(getX());
                else
		setX(getX() + 1);
		break;
   // case 'r' : {

   // wypilPotke = true;
   // break;
   // }
	default:
	akcja(zamieszkaly);
		break;
	}

}


void Czlowiek::kolizja(Zwierze *drugi, Swiat *zamieszkaly){

    if(drugi->getSila() >= this->getSila()){
                        gotoxy(23,11);
                        std::cout << drugi->znak << " zabija czlowieka";
                        umarlwWalce = true;

                gotoxy(30,12);
                std::cout << "KONIEC GRY";
                }

                else {gotoxy(23,11);
                std::cout << "Czlowiek zabija " << drugi->znak;

                }

}
void Czlowiek::rysowanie()
{
	gotoxy(x, y);
	printf("%c", znak);
}


Czlowiek::Czlowiek(int _x, int _y)
{
	x = _x;
	y = _y;
	sila = 4;
	inicjatywa = 5;
	znak = 'X';
}


Czlowiek::~Czlowiek()
{
}
