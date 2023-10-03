#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include"lobby.h"



using namespace std;



void help()
{
	
	hop(36, 13, 52, 16, 246);
	gotoXY(58, 13); cout << "HUONG DAN";
	gotoXY(41, 15); cout << "1. BAN CO VOI KINH THUOC 16x16.";
	gotoXY(41, 18); cout << "2. SU DUNG: PHIM W A S D DE DI CHUYEN";
	gotoXY(53, 19); cout << "PHIM ENTER DE DANH DAU.";
	gotoXY(41, 21); cout << "3. KHI CO 5 QUAN CO X HOAC O LIEN TIEP THEO";
	gotoXY(44, 22); cout << "CHIEU DOC, NGANG, CHEO SE KET THUC.";
	gotoXY(41, 24); cout << "4. AP DUNG LUAT CHAN HAI DAU TRONG CO CARO.";
	gotoXY(47, 26); cout << "YOU CAN DO IT. GOOD LUCK!!!";
	gotoXY(60, 28); cout << "BACK";
}