#pragma once
#include<iostream>
#include"graphics.h"
#include"windowsetting.h"
#include<string>
#include<stdio.h>
#include"playground.h"
#include"start.h"
#include"about.h"
#include"setting.h"
#include"Load.h"
using namespace std;

void box(int x, int y, int w, int h, int t_color, int b_color, string nd) {
	textcolor(b_color);
	for (int iy = y + 1; iy <= y + h - 1; iy++) {
		for (int ix = x + 1; ix <= x + w - 1; ix++) {
			gotoXY(ix, iy); cout << " ";
		}
	}
	textcolor(245);
	gotoXY(x + 4, y + 1);
	cout << nd;
	textcolor(t_color);
	if (h <= 1 || w <= 1) return;
	for (int ix = x; ix <= x + w; ix++) {
		gotoXY(ix, y);
		cout << char(196);
		gotoXY(ix, y + h);
		cout << char(196);
	}
	for (int iy = y; iy <= y + h; iy++) {
		gotoXY(x, iy);
		cout << char(179);
		gotoXY(x + w, iy);
		cout << char(179);
	}
	gotoXY(x, y); cout << char(218);
	gotoXY(x + w, y); cout << char(191);
	gotoXY(x, y + h); cout << char(192);
	gotoXY(x + w, y + h); cout << char(217);
}
//lam sang lua chon khi con tro tro toi
void mua(int m, int n, int check) {
	while (true) {
		int mcu, ncu;
		mcu = m;
		ncu = n - 1;
		textcolor(244);
		gotoXY(m, n);
		cout << "X";
		if (n == 30) {
			check = 1;
		}
		else if (n == 0 || n == 1 || n == 2 || n == 3 || n == 4) {
			check = 0;
		}
		if (check == 0) {
			n++;
		}
		else if (check == 1) {
			n = 0;
		}
		gotoXY(mcu, ncu);
		cout << " ";



		Sleep(120);




	}
}
// ve hinh nen
void vehinhnen() {
	textcolor(245);
	gotoXY(38, 5); cout << "    cccccc      aaa      rrrrr        ooooo                              ";
	gotoXY(38, 6); cout << "   ccc         aa aa     rr   rr     oo   oo                     ";
	gotoXY(38, 7); cout << "  ccc         aa   aa    rr   rr    oo     oo                     ";
	gotoXY(38, 8); cout << "  ccc        aa aaa aa   rrrrrr     oo     oo                     ";
	gotoXY(38, 9); cout << "   ccc      aa       aa  rr   rr     oo   oo                  ";
	gotoXY(38, 10); cout << "    cccccc aaa       aaa rr     rr    ooooo                          ";
	Sleep(1000);
	textcolor(244);
	gotoXY(65, 13); cout << "bb     bb    bb   iiiii  tttttt pppp                        ";
	gotoXY(65, 14); cout << "bbbbb    bbbb      iii     tt   pp  pp                   ";
	gotoXY(65, 15); cout << "bb  bb    bb       iii     tt   pp pp                 ";
	gotoXY(65, 16); cout << "bbbbb     bb      iiiii    tt   pp                    ";
	Sleep(1000);
}
void fixkhung() {
	//fixkhung
	textcolor(245);
	for (int p = 0; p < 4; p++) {
		gotoXY(55, 20 + (p * 2) + 2);
		cout << char(195);
		gotoXY(55 + 12, 20 + (p * 2) + 2);
		cout << char(180);
	}

}
void thanhsang(int x, int y, int w, int h, int b_color) {
	textcolor(b_color);
	for (int iy = y + 1; iy <= y + h - 1; iy++) {
		for (int ix = x + 1; ix <= x + 1; ix++) {
			gotoXY(ix, iy); cout << " ";
			gotoXY(ix + 10, iy); cout << " ";

		}
	}


}

void menu()
{
	int y = 20;
	int x = 55;
	
	int b_color_sang = 13;
	box(x, y, 12, 2, 245, 244, "Start");
	box(x, y + 2, 12, 2, 245, 244, "Load");
	box(x, y + 4, 12, 2, 245, 244, "About");
	box(x, y + 6, 12, 2, 245, 244, "Setting");
	box(x, y + 8, 12, 2, 245, 244, "Exit");
	int xp = x; int yp = y;//giu toa do thanh sang
	int xcu = xp; int ycu = yp;
	bool kt = true;
	/*while (true) {

		//backspace xoa du lieu cu
		//in
		if (kt == true) {
			gotoXY(xcu, ycu);
			thanhsang(xcu, ycu, 12, 2, 245);
			xcu = xp; ycu = yp;
			thanhsang(xp, yp, 12, 2, 80);
			kt = false;
		}
		//dieu khien//di chuyen
		if (_kbhit()) {
			char c = _getch();
			if (c == -32) {
				kt = true;//da bam
				c = _getch();
				if (c == 72) {
					if (yp != y)yp -= 2;
					else {
						yp = y + 8;
					}

				}
				else if (c == 80) {
					if (yp != y + 8)yp += 2;
					else {
						yp = y;
					}

				}
			}
		}*/
		
	}


void lenxuong() {
	int a[58][28] = { 0 };
	char c;
	int check = 0;
	int x = 57; int y = 21;
	while (true) {
		c = _getch();
		//if (c == 'a' && x > 0) GoTo(x -= 4, y);
		//if (c == 'd' && x < 4 + 4 * 15) GoTo(x += 4, y);
		
		if (c == 's'&&y<29 ) GoTo(x, y += 2);
		if (c == 'w'&&y>21 ) GoTo(x, y -= 2);
	    //if (y > 29)y = 19;//kim tra tro len xuong cham bien quay lai bien nguoc lai
		//if (y < 21)y = 27;
		a[x][y] = check;
		if (c == char(13)) check = 1;
		if (a[57][21] == 1) {
			playground();
			danhXO();
			break;

		}
		if (a[57][23] == 1) {
			system("cls");
			system("color f0");
			Loadgame();
			
		}  
		if (a[57][25] == 1) {
			system("cls");
			system("color f0");
			about();
			

			
		}
		if (a[57][27] == 1) {
			system("cls");
			system("color f0");
			setting();
		}
		if (a[57][29] == 1) {
			system("cls");
			system("color f0");
			
		}
	}
}
void lobby()
{
	vehinhnen();
	menu();
	fixkhung();
	gotoXY(57, 21);
	lenxuong();

}
//dieu khien di chuyen thuan loi hon
