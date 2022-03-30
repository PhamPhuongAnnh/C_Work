#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<Windows.h>
#include <Mmsystem.h>
void textcolor(int x);
void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}
char c, a, b, d, e, g;
void ham1()
{
	FILE *F;
	F = fopen("Hello.txt", "r");
	while (c != EOF)
	{
		c = fgetc(F);
		Sleep(1);//35
		textcolor(12);
		printf("%c", c);
	}fclose(F);
}
int main()
{
    SetConsoleOutputCP(65001);
	ham1();
	getch();
	return 0;
}
