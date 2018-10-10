#pragma once
#include "Czlowiek.h"
#include "Trawa.h"
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Swiat
{

public:

	int rozmiarx;
	int rozmiary;

    int iloscOrganizmowStart;
    int iloscRoslinStart;

    vector <Zwierze*> zyjatka;
    vector <Roslina*> kwiatki;

	Czlowiek *Bohater;
	Organizm *doKolizji;
	Swiat *Planeta;
	Swiat(int rozmiarx, int rozmiary);
    Zwierze *istniejacy;
    Roslina *magiczna;
    Zwierze *zderzony;
    void utworzDziecko(int x, int y, Zwierze *istniejacy);
    void noweZwierzatko(Zwierze *dziecko);
    bool sortujWgInicj( Zwierze *pierwsze,  Zwierze *drugie);
    bool sortujWgWieku( Zwierze *pierwsze,  Zwierze *drugie);
	bool granica(int posx, int posy);
    int getRozX();
    int getRozY();
    void specjalnaUmiejetnosc(Zwierze *istniejacy, Zwierze *zderzony, Roslina *magiczna);
    void tworzSwiat();
    vector<Zwierze*> getZyjatka();
    void tworzZyjatka();
    void tworzKwiatki();
    bool czyTakieSamePozycje(Organizm *org1, Organizm *org2);
	void wykonajPierwszaTure(Czlowiek *Bohater, int rozmiarx, int rozmiary);
	void wykonajTure(Czlowiek *Bohater, int rozmiarx, int rozmiary);
	void rysujSwiat(int rozmiarx, int rozmiary);


	~Swiat();
};

