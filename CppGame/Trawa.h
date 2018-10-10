
#pragma once
#include "Roslina.h"

class Trawa :
	public Roslina
{
    public:



    void chceZasiac();
	void rysowanie() override;
	Trawa(int x, int y);

	~Trawa();


};


