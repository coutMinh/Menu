#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include"lobby.h"

using namespace std;



void hop(int x, int y, int w, int h, int a)
{
	if (h <= 1 || w <= 1) return;
	for (int ix = x; ix <= x + w; ix++)
	{
		gotoXY(ix, y); textcolor(a);
		cout << char(196);
		gotoXY(ix, y + h); textcolor(a);
		cout << char(196);
	}
	for (int iy = y; iy <= y + h; iy++)
	{
		gotoXY(x, iy); textcolor(a);
		cout << char(179);
		gotoXY(x + w, iy); textcolor(a);
		cout << char(179);
	}
	gotoXY(x, y); textcolor(a); cout << char(218);
	gotoXY(x + w, y); textcolor(a); cout << char(191);
	gotoXY(x, y + h); textcolor(a); cout << char(192);
	gotoXY(x + w, y + h); textcolor(a); cout << char(217);
}



void start()
{
	
	hop(36, 13, 52, 11, 246);
	gotoXY(48, 13); cout << "WHO DO YOU WANT TO PLAY WITH ?";
	gotoXY(43, 16); cout << "            1 Play together";
	gotoXY(43, 18); cout << "            2 Play with Bot:";
	gotoXY(43, 19); cout << "               - Easy -";
	gotoXY(43, 20); cout << "              - Medium -";
	gotoXY(43, 21); cout << "               - Hard -";
	gotoXY(60, 23); cout << "BACK";
}
void Start() {
	
	start();
}