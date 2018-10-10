#pragma once
#include "Zwierze.h"

class Czlowiek :
	public Zwierze
{
public:
    bool wypilPotke;
    bool potka();
 void kolizja(Zwierze *drugi, Swiat *zamieszkaly);
	void akcja(Swiat *zamieszkaly);
//	void kolizja(Swiat *zamieszkaly);
	void rysowanie();
	Czlowiek(int x, int y);
	~Czlowiek();
};

