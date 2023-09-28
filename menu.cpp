#include<iostream>
#include"Header.h"
#include<string>
#include<stdio.h>



using namespace std;
void FixConsoleWindow() {
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);

}

void box(int x, int y, int w, int h, int t_color, int b_color, string nd) {
	textcolor(b_color);
	for (int iy = y+1; iy <= y + h-1; iy++) {
		for (int ix = x+1; ix <= x + w-1; ix++) {
			gotoXY(ix, iy); cout << " ";
		}
	}
	textcolor(5);
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
void mua(int m, int n,int check) {
	while (true) {
		int mcu, ncu;
		mcu = m;
		ncu = n - 1;
		textcolor(116);
		gotoXY(m, n);
		cout << "X";
		if (n == 30) {
			check = 1;
		}
		else if (n == 0||n==1||n==2||n==3||n==4) {
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

int main() {
	FixConsoleWindow();

	
	for (int X = 0; X <= 150; X++) {
		for (int Y = 0; Y <= 30; Y++) {
			textcolor(120);
			
			gotoXY(X, Y);
			cout << " ";
				
		}
	}
	
	
	
	
	/*while (true) {
		int mcu, ncu;
		mcu = m;
		ncu = n-1;
		textcolor(116);
		gotoXY(m, n);
		cout << "MINH";
		if (n == 30) {
			check = 1;
		}
		else if (n == 0) {
			check = 0;
		}
		if (check == 0) {
			n++;
		}
		else if (check == 1) {
			n=0;
		}
		gotoXY(mcu, ncu);
		cout << "       ";

		
		
		Sleep(120);
		


		
	}*/

	textcolor(117);
	gotoXY(38, 5); cout << "    cccccc      aaa      rrrrr        ooooo                              ";
	gotoXY(38, 6); cout << "   ccc         aa aa     rr   rr     oo   oo                     ";
	gotoXY(38, 7); cout << "  ccc         aa   aa    rr   rr    oo     oo                     ";
	gotoXY(38, 8); cout << "  ccc        aa aaa aa   rrrrrr     oo     oo                     ";
	gotoXY(38, 9); cout << "   ccc      aa       aa  rr   rr     oo   oo                  ";
	gotoXY(38, 10); cout <<"    cccccc aaa       aaa rr     rr    ooooo                          ";
	Sleep(1000);
	textcolor(116);
	gotoXY(65, 13); cout << "bb     bb    bb   iiiii  tttttt pppp                        ";
	gotoXY(65, 14); cout << "bbbbb    bbbb      iii     tt   pp  pp                   ";
	gotoXY(65, 15); cout << "bb  bb    bb       iii     tt   pp pp                 ";
	gotoXY(65, 16); cout << "bbbbb     bb      iiiii    tt   pp                    ";
	Sleep(1000);
	
	box(55, 20, 12, 2, 2, 1, "Start");
	box(55, 22, 12, 2, 2, 1, "Load");
	box(55, 24, 12, 2, 2, 1, "About");
	box(55, 26, 12, 2, 2, 1, "Setting");
	box(55, 28, 12, 2, 2, 1, "Exit");

	
	_getch();
	return 0;
}