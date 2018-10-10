#pragma once
#include "Organizm.h"
#include "Funkcje.h"


class Zwierze :
	public Organizm
{
public:
	Zwierze();
	int sila;
	int inicjatywa;
	char znak;

   // void utworzDziecko(int x, int y, Swiat *zamieszkaly, Zwierze *rodzic);
    void akcja(Swiat *zamieszkaly);
    void ruch();
    void ruchAntylopy();
    virtual void kolizja(Zwierze *drugi, Swiat *zamieszkaly) = 0;
	virtual void rysowanie() = 0;
 //   void kolizja(Organizm *drugie, Swiat *zamieszkaly);
   // int specjalnaUmiejetnosc();

	~Zwierze();
};

