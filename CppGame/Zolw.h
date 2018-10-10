
#pragma once
#include "Zwierze.h"

class Zolw :
	public Zwierze
{
    public:

 void kolizja(Zwierze *drugi, Swiat *zamieszkaly);


	void rysowanie() override;
	Zolw(int x, int y);

	~Zolw();


};

