#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i=2000;
	clrscr();
	do
	{
		if(i%4==0)
		{
			P("%d ",i);

		}
		i++;

	}while(i<=3000);

	getch();


}