
#pragma once
#include "Roslina.h"

class Barszcz :
	public Roslina
{
    public:



    void kolizja(Zwierze *drugie, Swiat *zamieszkaly);
	void rysowanie() override;
	Barszcz(int x, int y);

	~Barszcz();


};

