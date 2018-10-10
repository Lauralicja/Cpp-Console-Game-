
#pragma once
#include "Zwierze.h"

class Lis :
	public Zwierze
{
    public:


 void kolizja(Zwierze *drugi, Swiat *zamieszkaly);

	void rysowanie() override;
	Lis(int x, int y);

	~Lis();


};

