#include<iostream>
#include<conio.h>
#include<Windows.h>
#include"windowsetting.h"
#include"playground.h"
#include"graphics.h"
#include"lobby.h"
#include"windowsetting.h"
#include<stdlib.h>


using namespace std;




int main()
{
	SetConsoleTitle(L"CO CARO");
	system("color f0"); // nhu cai ve nen 
	FixConsoleWindow();
	DisableCtrButton(0, 0, 1);
	resizeConsole(1070, 620);
	ShowScrollBar(GetConsoleWindow(), SB_BOTH, FALSE);

	//ShowCur(0);
	//DisableSelection();



	lobby();


	//playground();

	//_getch();


	return 0;
}
