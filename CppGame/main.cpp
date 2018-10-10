#include <iostream>
#include <stdlib.h>
#include "Czlowiek.h"

#include "Swiat.h"


using namespace std;


int main() {

	int wysokoscswiata = 20;
	int szerokoscswiata = 20;

//	cout << "Podaj wysokosc swiata: ";
//	cin >> wysokoscswiata;
//	cout << "Podaj szerokosc swiata: ";
	//cin >> szerokoscswiata;
	system("cls");

	Swiat Moj(szerokoscswiata, wysokoscswiata);
	Czlowiek OtoJa(3,4);

	//vector<Organizm*> zyjatka;
	Moj.rysujSwiat(wysokoscswiata, szerokoscswiata);
  //  Moj.tworzSwiat();



	char akcja = '0';
	 Moj.wykonajPierwszaTure(&OtoJa, szerokoscswiata, wysokoscswiata);
	while (OtoJa.umarlwWalce==false) {

		system("cls");

		Moj.wykonajTure(&OtoJa, szerokoscswiata, wysokoscswiata);


	}



	return 0;
}
