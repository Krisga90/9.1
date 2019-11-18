#pragma once
#ifndef GOLF_H
#define GOLF_H
const int Len = 40;
struct golf
{
	char full_name[Len];
	int handicap;
};

//funkcja ustawia w strukturze golf zadane nazwisko i handicap
// na podstawie argumentow wywolania
void set_golf(golf & g, const char * name, int hc);
//funkcja pobiera nazwisko i handicap od uzytkownika
void set_golf(golf & g);
//ustawia handicap gracza
void handicap(golf & g, int hc);
//Wyœwietla zawartoœæ pó³ struktury handicap
void show_golf(const golf & g);

#endif; //GOLF_H