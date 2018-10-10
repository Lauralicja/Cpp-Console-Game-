
#pragma once
#include "Zwierze.h"

class Wilk :
	public Zwierze
{
    public:


 void kolizja(Zwierze *drugi, Swiat *zamieszkaly);

	void rysowanie() override;
	Wilk(int x, int y);

	~Wilk();


};

