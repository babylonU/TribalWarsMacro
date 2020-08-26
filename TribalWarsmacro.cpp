#include <iostream>
#include <windows.h>
#include <conio.h>
#include <locale>

using namespace std;



void sendKeyDown(unsigned char keyCode)
{
    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = keyCode;
    input.ki.dwFlags = 0;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;

    SendInput(1, &input, sizeof(INPUT));
}

void table(int x,int y){
	
	COORD  coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
	


void sendKeyUp(unsigned char keyCode)
{
    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = keyCode;
    input.ki.dwFlags = KEYEVENTF_KEYUP;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;

    SendInput(1, &input, sizeof(INPUT));
}
// Bast�r �ek fonksiyonlar�
int main(){
int a;
int pixel;
setlocale(LC_ALL,"Turkish");
//	SetCursorPos(700, 600);
// 1440x900 - 400,465
	table(12,3);cout << "1- 1280 x 1024";
	table(12,4);cout << "2- 1280 x 978";
	table(12,5);cout << "3- 1440 x 900";
	table(5,20);cout << "github.com/s0l0n3t/"<<"\n\nKlanlar (request1) - HELL";
	table(12,10);cout << "Hangi ��z�n�rl�k :";cin >> pixel;
	
	system("Cls");
	switch(pixel){
		case 1:
		table(5,20);cout << "github.com/s0l0n3t/"<<"\n\nKlanlar (request1) - HELL";
		table(12,5);cout << "Ka� sald�r� olacak :";cin >> a;
		sendKeyDown(VK_MENU);
		sendKeyDown(VK_TAB);
    	sendKeyUp(VK_TAB);
    	sendKeyUp(VK_MENU);
    	Sleep(100);
		SetCursorPos(300, 480);	
		goto etken;
		
		case 2:
		table(5,20);cout << "github.com/s0l0n3t/"<<"\n\nKlanlar (request1) - HELL";
		table(12,5);cout << "Ka� sald�r� olacak :";cin >> a;
		sendKeyDown(VK_MENU);
		sendKeyDown(VK_TAB);
    	sendKeyUp(VK_TAB);
    	sendKeyUp(VK_MENU);
    	Sleep(100);
		SetCursorPos(300, 450);	
		goto etken;
		
		case 3:
		table(5,20);cout << "github.com/s0l0n3t/"<<"\n\nKlanlar (request1) - HELL";
		table(12,5);cout << "Ka� sald�r� olacak :";cin >> a;
		sendKeyDown(VK_MENU);
		sendKeyDown(VK_TAB);
    	sendKeyUp(VK_TAB);
    	sendKeyUp(VK_MENU);
    	Sleep(100);
		SetCursorPos(400, 465);	
		goto etken;
	
	}
	
	
	
	cin >> a;
	sendKeyDown(VK_MENU);
	sendKeyDown(VK_TAB);
    sendKeyUp(VK_TAB);
    sendKeyUp(VK_MENU);
    Sleep(100);
    SetCursorPos(300, 480);

	etken:
	for(int i=0; i<a; ++i)
    {
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	sendKeyDown(VK_CONTROL);
	sendKeyDown(VK_TAB);
	sendKeyUp(VK_TAB);
	sendKeyUp(VK_CONTROL);
	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);}
	return 0;   
// Genel yap� pointer'�
}

/*
VK_MENU /__--__/  Alt
0x12
     */
