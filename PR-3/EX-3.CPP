#include<stdio.h>
#include<conio.h>
#define P printf
void main()
{
	int n,last,sum;
	clrscr();
	P("enter any number :");
	scanf("%d",&n);
	last=n%10;
	while(n>9)
	{
		n=n/10;

	}
	P("sum of first and last digit: %d ",n,sum);

	getch();
}