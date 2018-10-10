#include "Swiat.h"
#include "Czlowiek.h"
#include "Lis.h"
#include "Wilk.h"
#include "Guarana.h"
#include "Barszcz.h"
#include "WilczeJagody.h"
#include "Zolw.h"
#include "Mlecz.h"
#include "Antylopa.h"
#include "Trawa.h"
#include "Owca.h"
#include <stdio.h>
#include <conio.h>
#include <algorithm>
#include <cstdlib>
#include "Funkcje.h"

using namespace std;



int Swiat::getRozX()
{
    return rozmiarx;
}

int Swiat::getRozY()
{
    return rozmiary;
}

bool Swiat::granica(int x, int y)
{


	if (x == 0 && y == 0 && x >= getRozX() && y >= getRozY())
	{
		return false;
    if(x<=1) x++;
    if(y<=1) y++;
    if(x >= getRozX()) x--;
    if (x >= getRozY()) y--;
	}
	else return true;

};


Swiat::Swiat(int rozmiarx, int rozmiary) : rozmiarx(rozmiarx), rozmiary(rozmiary)
{

}

void Swiat::noweZwierzatko(Zwierze *dziecko){

zyjatka.push_back(dziecko);

}


void Swiat::utworzDziecko(int x, int y, Zwierze *istniejacy){
    if(x>1 && x < 18 && y > 1 && y < 18){
        if(istniejacy->znak == 'o'){
            	Owca *owieczkaMala = new Owca(x+1, y);
				this->noweZwierzatko(owieczkaMala);

        }

    }


}


bool Swiat::czyTakieSamePozycje(Organizm *org1, Organizm *org2)
{


    if ((org1->getX() == org2->getX() && org1->getY() == org2->getY()) == true)
    return true;
    else return false;
}



void Swiat::rysujSwiat(int rozmiarx, int rozmiary)
{
	int obwod = 178;
	gotoxy(rozmiarx + 5, 0);
	cout << "Laura Zuchowska, 165101";
	for (int i = 0; i <= rozmiarx; i++) {
		gotoxy(0, i);
		printf("%c", obwod);
		gotoxy(rozmiary, i);
		printf("%c", obwod);
	}
	for (int i = 0; i <= rozmiary; i++) {
		gotoxy(i, 0);
		printf("%c", obwod);
		gotoxy(i, rozmiarx);
		printf("%c", obwod);
	}



}





void Swiat::tworzKwiatki()
{
     int RandX = (rand() % (rozmiarx));
     int RandY = (rand() % (rozmiary));
       if(RandX >= 1 && RandX <= rozmiarx - 1 && RandY >= 1 && RandY <= rozmiarx-1){
        Trawa *trawka = new Trawa(RandX, RandY);
        Mlecz *mleczyk = new Mlecz(RandX, RandY);
        WilczeJagody *jagodka = new WilczeJagody(RandX,RandY);
        Guarana *guaranka = new Guarana(RandX, RandY);
        Barszcz *barszczyk = new Barszcz(RandX, RandY);
        Roslina *kazda;

         int numerekRoslin = rand() % 5;

 switch(numerekRoslin){
    case 0: {
        kazda = trawka;

       break; }
    case 1: { kazda = mleczyk; break; }
    case 2: { kazda = jagodka; break; }
    case 3: { kazda = guaranka; break; }
    case 4: { kazda = barszczyk; break; }

  }
     kwiatki.push_back(kazda);
     kazda->rysowanie();


      }
}

bool Swiat::sortujWgInicj(Zwierze* org1, Zwierze* org2)
{
	return org1->getInicjatywa() > org2->getInicjatywa();
}


bool Swiat::sortujWgWieku(Zwierze* org1, Zwierze* org2)
{
	return org1->getWiek() > org2->getWiek();
}

 void Swiat::tworzZyjatka()
{

     int RandX = (rand() % (rozmiarx));
     int RandY = (rand() % (rozmiary));


        if(granica(RandX,RandY) == true){
            Lis *lisek = new Lis(RandX,RandY);
            Wilk *wilczek = new Wilk(RandX, RandY);
            Owca *owieczka = new Owca(RandX, RandY);
            Zolw *zolwik = new Zolw(RandX, RandY);
            Antylopa *antylopka = new Antylopa(RandX, RandY);

            Zwierze *kazde;




    int numerek = rand() % 5;

    switch(numerek){

   case 0: {
       kazde = lisek;

       break; }
    case 1: { kazde = wilczek;
    break; }
    case 2: { kazde = owieczka;
    break; }
    case 3: { kazde = zolwik;
    break; }
    case 4: { kazde = antylopka;
    break; }
    default: break;

        }

        zyjatka.push_back(kazde);


        kazde->rysowanie();

   }


}

vector<Zwierze*> Swiat::getZyjatka(){
return this->zyjatka;
}

void Swiat::tworzSwiat()
{
    iloscOrganizmowStart = (rand() % rozmiary-1) + 10;
    for(int i=0; i<iloscOrganizmowStart; i++){
        tworzZyjatka();
    }
    //sort(zyjatka.begin(), zyjatka.end(), sortujWgInicj);
    //sort(zyjatka.begin(), zyjatka.end(), sortujWgWieku);
    iloscRoslinStart = (rand() % rozmiary-1);
    for(int i=0; i<iloscRoslinStart; i++){
        tworzKwiatki();
    }

}
void Swiat::specjalnaUmiejetnosc(Zwierze *istniejacy, Zwierze *zderzony, Roslina *magiczna)
{

    switch(istniejacy->znak){
        case 'o' :  break;
        case 'z' :  break;
        case 'w' :  break;
        case 'l' :


                bool widzeKogos = false;


                   if( zderzony->getSila() > istniejacy->getSila() )
                    widzeKogos = true;

                    else widzeKogos = false;

                if(widzeKogos == true){
                    istniejacy->getX() != zderzony->getX();
                    istniejacy->getY() != zderzony->getY();

                }

            break;



    }


    switch(magiczna->znak){

    case '"' :
    break;

    }


}





void Swiat::wykonajPierwszaTure(Czlowiek *Bohater, int rozmiarx, int rozmiary)
{
    system("cls");
    tworzSwiat();

	this->rysujSwiat(rozmiarx, rozmiary);

	for(size_t i=0; i<zyjatka.size(); i++){
      zyjatka[i]->akcja(Planeta);
      specjalnaUmiejetnosc(istniejacy, zderzony, magiczna);
        zyjatka[i]->setWiek(zyjatka[i]->getWiek()+1);


	}


	Bohater->rysowanie();
	Bohater->akcja(Planeta);

}


void Swiat::wykonajTure(Czlowiek *Bohater, int rozmiarx, int rozmiary)
{


    int czlowiekprzedx = Bohater->getX();
    int czlowiekprzedy = Bohater->getY();

	system("cls");


	this->rysujSwiat(rozmiarx, rozmiary);

	for(size_t i=0; i<zyjatka.size(); i++){

       zyjatka[i]->rysowanie();
        int xprzed = zyjatka[i]->getX();
        int yprzed = zyjatka[i]->getY();



       zyjatka[i]->akcja(Planeta);
        zyjatka[i]->setWiek(zyjatka[i]->getWiek()+1);



        if(zyjatka[i]->getX()==Bohater->getX() && zyjatka[i]->getY()==Bohater->getY()){

         if(zyjatka[i]->znak == 'z'){
                    Bohater->setX(czlowiekprzedx);
                    Bohater->setX(czlowiekprzedy);
                }
        zyjatka[i]->kolizja(Bohater, Planeta);
        if(zyjatka[i]->umarlwWalce == true)
        zyjatka.erase(zyjatka.begin() + i);



        }

       for(size_t j=0; j<zyjatka.size(); j++){

       if(zyjatka[i]->getX()==zyjatka[j]->getX() && zyjatka[i]->getY()==zyjatka[j]->getY()){

       if (i!=j){
            if(zyjatka[i]->znak == 'z'){

                if(zyjatka[j]->getSila() >=5)
                    zyjatka.erase(zyjatka.begin() + i);
                else {
                    zyjatka[j]->setX(xprzed);
                    zyjatka[j]->setX(yprzed);
                }
            }

            if(zyjatka[j]->znak == 'z'){
                if(zyjatka[i]->getSila() >=5)
                    zyjatka.erase(zyjatka.begin() + j);
                else {
                    zyjatka[i]->setX(xprzed);
                    zyjatka[i]->setX(yprzed);
                }
            }
        zyjatka[i]->kolizja(zyjatka[j], Planeta);
        if(zyjatka[i]->umarlwWalce == true)
        zyjatka.erase(zyjatka.begin() + i);
        else if (zyjatka[j]->umarlwWalce == true)
        zyjatka.erase(zyjatka.begin() + j);
       }
               }
       }


	}

    for(size_t i=0; i<kwiatki.size(); i++){

       kwiatki[i]->rysowanie();

       kwiatki[i]->akcja(Planeta);

       for(size_t j = 0; j<zyjatka.size(); j++){
    if(kwiatki[i]->getX()+1==Bohater->getX() && kwiatki[i]->getY()+1==Bohater->getY() || kwiatki[i]->getX()-1==Bohater->getX() && kwiatki[i]->getY()-1==Bohater->getY() || kwiatki[i]->getX()-1==Bohater->getX() && kwiatki[i]->getY()+1==Bohater->getY() || kwiatki[i]->getX()+1==Bohater->getX() && kwiatki[i]->getY()-1==Bohater->getY()){

                if(kwiatki[i]->znak == 'v'){
                        kwiatki[i]->kolizja(Bohater, Planeta);
                          gotoxy(23,22);
            std::cout << "Barszcz sosnowskiego zabija czlowieka! KONIEC GRY!";
                    Bohater->umarlwWalce = true;





                }}

    if(kwiatki[i]->getX()+1==zyjatka[j]->getX() && kwiatki[i]->getY()+1==zyjatka[j]->getY() || kwiatki[i]->getX()-1==zyjatka[j]->getX() && kwiatki[i]->getY()-1==zyjatka[j]->getY() || kwiatki[i]->getX()+1==zyjatka[j]->getX() && kwiatki[i]->getY()-1==zyjatka[j]->getY() || kwiatki[i]->getX()-1==zyjatka[j]->getX() || kwiatki[i]->getY()+1==zyjatka[j]->getY()){

                if(kwiatki[i]->znak == 'v'){
                        kwiatki[i]->kolizja(zyjatka[j], Planeta);
                          gotoxy(23,22);
            std::cout << "Barszcz sosnowskiego zabija " << zyjatka[j]->znak;
                    zyjatka.erase(zyjatka.begin() + j);


                }}

        if(kwiatki[i]->getX()==zyjatka[j]->getX() && kwiatki[i]->getY()==zyjatka[j]->getY()){

                    if(kwiatki[i]->znak == '"'){
                        kwiatki[i]->kolizja(zyjatka[j], Planeta);
                          gotoxy(23,21);
            std::cout << "Wilcza jagoda zabija " << zyjatka[j]->znak;
                    zyjatka.erase(zyjatka.begin() + j);


                }


                kwiatki[i]->kolizja(zyjatka[j], Planeta);
                kwiatki.erase(kwiatki.begin() + i);
        }


        if(kwiatki[i]->getX()==Bohater->getX() && kwiatki[i]->getY()==Bohater->getY()){

                    if(kwiatki[i]->znak == '"'){
                        kwiatki[i]->kolizja(Bohater, Planeta);
                          gotoxy(23,21);
            std::cout << "Wilcza jagoda zabija czlowieka! KONIEC GRY!";
                      Bohater->umarlwWalce = true;


                }

                kwiatki.erase(kwiatki.begin() + i);
        }


       }
       }


	Bohater->rysowanie();

	Bohater->akcja(Planeta);



}








Swiat::~Swiat()
{
}
