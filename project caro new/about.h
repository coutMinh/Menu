#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include"graphics.h"
#include"windowsetting.h"
#include"lobby.h"
#include"playground.h"
#include"help.h"
#include<stdlib.h>
using namespace std;







void about1()
{
	
	hop(36, 13, 52, 14, 246);
	gotoXY(59, 13); cout << " ABOUT ";
	gotoXY(47, 16); cout << " DO AN GAME CO CARO - NHOM IV";
	gotoXY(44, 18); cout << "_MSSV_                   _HO VA TEN_";
	gotoXY(43, 19); cout << "23122031               NGUYEN HUY HOANG";
	gotoXY(43, 20); cout << "23122042              TRAN TA QUANG MINH";
	gotoXY(43, 21); cout << "23122043                 NGUYEN BA NAM";
	gotoXY(43, 22); cout << "23122056                 LAM HOANG VU";
	gotoXY(43, 24); cout << "GV HUONG DAN: THAY TRUONG TOAN THINH";
	gotoXY(60, 25); cout << "HELP";
	gotoXY(60, 26); cout << "BACK";
}
void aboutback() {
	gotoXY(60, 25);
	int a[60][26] = { 0 };
	int check = 0;
	char c;
	int x = 60; int y = 25;
	while (true) {

		c = _getch();
		if (c == 's' && y ==25) gotoXY(x,y+=1);
		if (c == 'w' && y ==26) gotoXY(x, y-=1);
		a[x][y] = check;
		if (c == char(13)) {
			check = 1;
		}
		if (a[60][ 25] == 1) {
			system("cls");
			system("color f0");
			help();
		}
		if (a[60][26] == 1) {
			system("cls");
			
		}

	}
}
void about() {
	about1();
	aboutback();
}

