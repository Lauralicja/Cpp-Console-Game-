

#pragma once
#include "stdio.h"
#include <Windows.h>
#include <iostream>
#include "Funkcje.h"
using namespace std;



void gotoxy(int kolumna, int wiersz) {

	COORD kordy;
	kordy.X = kolumna;
	kordy.Y = wiersz;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), kordy);

}
