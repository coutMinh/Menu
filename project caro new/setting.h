#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include"graphics.h"
#include"lobby.h"

using namespace std;




void setting()
{
	
	hop(36, 13, 52, 14, 246);
	gotoXY(57, 13); cout << "SOUND EFFECT";
	gotoXY(43, 16); cout << "        **                        **";
	gotoXY(43, 17); cout << "      ** *    *                 ** *";
	gotoXY(43, 18); cout << "   ***** *  *  *             ***** *";
	gotoXY(43, 19); cout << "   ***** *   *  *            ***** *";
	gotoXY(43, 20); cout << "   ***** *  *  *             ***** *";
	gotoXY(43, 21); cout << "      ** *    *                 ** *";
	gotoXY(43, 22); cout << "       ***                       ***";
	gotoXY(43, 24); cout << "    SOUND ON                  SOUND OFF";
	gotoXY(60, 26); cout << "  BACK";
}