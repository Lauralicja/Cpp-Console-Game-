#include "Organizm.h"
#include "Swiat.h"




Organizm::Organizm()
{

}

int Organizm::getWiek(){
    return wiek;
}


int Organizm::getX()
{
	return x;
}

int Organizm::getY()
{
	return y;
}

int Organizm::getSila()
{
	return sila;
}

int Organizm::getInicjatywa()
{
	return inicjatywa;
}

void Organizm::setX(int x)
{
	this->x = x;
}


void Organizm::setWiek(int wiek)
{
	this->wiek = wiek;
}
void Organizm::setY(int y)
{
	this->y = y;
}

void Organizm::setSila(int sila)
{
	this->sila = sila;
}

void Organizm::setInicjatywa(int inicjatywa)
{
	this->inicjatywa = inicjatywa;
}



Organizm::~Organizm()
{
}
