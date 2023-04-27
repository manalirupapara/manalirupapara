#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("first no.:");
	scanf("%d",&a);
	printf("second no.:");
	scanf("%d",&b);
       if(a>0)
       {
	  printf("first no. is greater");
       }
       else if(b<0)
       {
	  printf("second no. is greater");
       }

      getch();
}