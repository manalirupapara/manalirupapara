#include<stdio.h>
#include<conio.h>
#define P printf
void main()
{
	int n,c=0;

	clrscr();
	P("enter number:");
	scanf("%d",&n);
	while(n>0)
	{
		n/=10;
		c++;
	}
	P("number has %d digits",c);

	getch();


}
