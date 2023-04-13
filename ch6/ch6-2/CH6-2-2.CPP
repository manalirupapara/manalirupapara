#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i=10;
	clrscr();
	do
	{
		P("%d\n",i);
		i--;

	}while(i>=1);

	getch();

}