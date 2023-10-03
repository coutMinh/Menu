#pragma once

#include<iostream>
#include"graphics.h"
#include"windowsetting.h"


using namespace std;

void Xwin() {
	ShowCur(0);
	
	int y = 6;
	int yy = 24;
	int i = 1;
	for (int x=20; x < 120; x++) {
		textcolor(i);
		gotoXY(x, y);
		cout << " ";
		i+=15;
	}
	for (int x = 20; x < 120; x++) {
		textcolor(i);
		gotoXY(x, yy);
		cout << " ";
		i += 15;
	}
	for (int j = 241; j <= 252; j++) {
		
		
		Sleep(200);
		if (j > 252)j = 241;

		textcolor(j);
		gotoXY(20, 9);  cout << " .------------------.       .------------------.      .------------------.     .------------------.                                                      ";
		gotoXY(20, 10); cout << "| .----------------. |     | .----------------. |    | .----------------. |   | .----------------. |                                    ";
		gotoXY(20, 11); cout << "| |    xxx  xxx    | |     | |  www     www   | |    | |    wwwwww      | |   | | nnnn     nnnn  | |                  ";
		gotoXY(20, 12); cout << "| |     x    x     | |     | |   w       w    | |    | |      ww        | |   | |  nnnn     nn   | |                                   "; textcolor(j + 1);
		gotoXY(20, 13); cout << "| |      x  x      | |     | |   w       w    | |    | |      ww        | |   | |  nn nn    nn   | |                                   ";
		gotoXY(20, 14); cout << "| |       xx       | |     | |   w   w   w    | |    | |      ww        | |   | |  nn  nn   nn   | |                                    ";
		gotoXY(20, 15);  cout <<"| |       xx       | |     | |    w  w  w     | |    | |      ww        | |   | |  nn   nn  nn   | |                                    "; textcolor(j + 2);
		gotoXY(20, 16); cout << "| |      x  x      | |     | |    w w w w     | |    | |      ww        | |   | |  nn    nn nn   | |                                    ";
		gotoXY(20, 17); cout << "| |     x    x     | |     | |    w w w w     | |    | |      ww        | |   | |  nn     nnnn   | |                                    ";
		gotoXY(20, 18); cout << "| |    xxx  xxx    | |     | |     w   w      | |    | |    wwwwww      | |   | | nnnn     nnnn  | |                                    "; textcolor(j -1);
		gotoXY(20, 19); cout << "| '----------------' |     | '----------------' |    | '----------------' |   | '----------------' |                                   ";
		gotoXY(20, 20); cout << "'--------------------'     '--------------------'    '--------------------'   '--------------------'                                    ";
		if (j == 252)j = 241;
	}
}
