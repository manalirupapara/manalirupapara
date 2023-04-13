#include<stdio.h>
#include<conio.h>
#define P printf
void main()
{
	int i=1,n;
	clrscr();

		P("enter ending point:");
		scanf("%d",&n);
	do
	{
		P("%d\n",i);
		i++;

	}while(i<=n);

	getch();


}