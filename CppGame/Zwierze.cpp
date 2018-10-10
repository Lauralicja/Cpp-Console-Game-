#include "Zwierze.h"
#include "Owca.h"
#include "Swiat.h"
#include <iostream>
#include <cstdlib>
#include <vector>





Zwierze::Zwierze()
{
}

void Zwierze::ruch(){

 int RandX = (std::rand() % 2);
 int RandY = (std::rand() % 2);
     switch(RandX){

        case 0: {

        if(x<=1)
            x += 1;
        else
            x -= 1;

        break;
        }

        case 1: {

        if (x >= 19)
            x -= 1;
        else
            x += 1;
        break;
        }

        default: break;
    }

    switch(RandY){

        case 0: {

        if (y<= 1)
            y += 1;
        else
            y -= 1;
        break;
        }

        case 1: {

        if (y >= 19)
            y -= 1;
        else
            y += 1;
        break;
        }

        default: break;
    }

}

void Zwierze::ruchAntylopy(){

 int RandX = (std::rand() % 2);
 int RandY = (std::rand() % 2);
     switch(RandX){

        case 0: {

        if(x<=2)
            x += 2;
        else
            x -= 2;

        break;
        }

        case 1: {

        if (x >= 18)
            x -= 2;
        else
            x += 2;
        break;
        }

        default: break;
    }

    switch(RandY){

        case 0: {

        if (y<= 2)
            y += 2;
        else
            y -= 2;
        break;
        }

        case 1: {

        if (y >= 18)
            y -= 2;
        else
            y += 2;
        break;
        }

        default: break;
    }

}


void Zwierze::akcja(Swiat *zamieszkaly)
{


	if (this->znak == 'a'){
        ruchAntylopy();
	}

    else if (this->znak == 'z'){
        int czyRusze = (std::rand() % 4);
        switch(czyRusze) {
        case 0: { break; }
         case 1: { break; }
          case 2: { break; }
        case 3: {
            ruch();
            }
        }
    }
    else {

    ruch();
    }
    wiek += 1;
}






Zwierze::~Zwierze()
{
}
