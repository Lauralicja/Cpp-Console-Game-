#pragma once
#include "Organizm.h"
class Roslina :
	public Organizm
{


public:

	Roslina();
	char znak;
	Roslina *siejaca;


	bool czasZasiac;
    void akcja(Swiat *zamieszkaly);
    void kolizja(Zwierze *drugie, Swiat *zamieszkaly);
	virtual void rysowanie() = 0;

	~Roslina();
};

