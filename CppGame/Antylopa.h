
#pragma once
#include "Zwierze.h"

class Antylopa :
	public Zwierze
{
    public:



 void kolizja(Zwierze *drugi, Swiat *zamieszkaly);
	void rysowanie() override;
	Antylopa(int x, int y);

	~Antylopa();


};

