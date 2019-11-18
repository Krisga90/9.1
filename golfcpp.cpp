#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "golf.h"

#pragma warning(disable : 4996)




void set_golf(golf & g, const char * name, int hc)
{
	std::strncpy(g.full_name, name, Len);
	g.handicap = hc;
}
//funkcja pobiera nazwisko i handicap od uzytkownika

void set_golf(golf & g)
{
	std::cout << "Podaj nazwisko Gracza: ";
	std::cin.getline(g.full_name, Len);
	if (!(std::cin))
	{
		std::cin.clear();
		while (std::cin.get() != '\n')
			continue;
	}
	std::cout << "Podaj handicap gracza: ";
	std::cin >> g.handicap;
	if (std::cin.fail())
	{
		while (std::cin.fail())
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Podano zla wartosc, sprobuj ponownie: ";
			std::cin >> g.handicap;
		}

	}
	std::cin.get();
}
//ustawia handicap gracza
void handicap(golf & g, int hc)
{
	g.handicap = hc + 1;
}
//Wyœwietla zawartoœæ pól struktury handicap
void show_golf(const golf & g)
{
	using std::cout;
	cout << "Handicap gracza " << g.full_name << " wynosi: " << g.handicap << " .\n";
}