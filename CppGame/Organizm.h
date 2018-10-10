#pragma once

#include <iostream>

class Swiat;
class Zwierze;
class Organizm
{
protected:
	int x, y;
	int wiek;
    Swiat *zamieszkaly;
	int sila;
	int inicjatywa;

public:
	Organizm();
	char znak;
    bool umarlwWalce;

    int getWiek();
	int getX();
	int getY();
	int getSila();
	int getInicjatywa();
	void setX(int x);
	void setY(int y);
	void setWiek(int wiek);
	void setSila(int sila);
	void setInicjatywa(int inicjatywa);
   // virtual int specjalnaUmiejetnosc() = 0;
	virtual void akcja(Swiat *zamieszkaly) = 0;
	virtual void kolizja(Zwierze *drugie, Swiat *zamieszkaly) = 0;
	virtual void rysowanie() = 0;

	~Organizm();
};
