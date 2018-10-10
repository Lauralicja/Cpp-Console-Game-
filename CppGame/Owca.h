
#pragma once
#include "Zwierze.h"

class Owca :
	public Zwierze
{
    public:



    void kolizja(Zwierze *drugi, Swiat *zamieszkaly);
	void rysowanie() override;
	Owca(int x, int y);

	~Owca();


};

