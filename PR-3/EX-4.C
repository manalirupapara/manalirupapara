#include<stdio.h>
#include<conio.h>
#define P printf
void main()
{
	int n,i,f;
	f=i=1;
	clrscr();
	P("enter a number to find f:");
	scanf("%d",&n);
	while(i<=n)
	{
		f*=i;
		i++;
	}
	P("the factorial of %dis:%d",n,f);
	getch();

}









