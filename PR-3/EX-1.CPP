#include<stdio.h>
#include<conio.h>
#define P printf
void main()
{
	char i='a';
	clrscr();
		P("enter ending point:");
		scanf("%c",&i);
		do
		{
			P("%c",i);
			i++;
		}while(i<='z');
	getch();

}