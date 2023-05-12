//5. How to return multiple value from function.

#include<stdio.h>

void multiplevluefunction(int *a, int *b, int *c)
{
		*a = 10;
		*b = 20;
		*c = 30;		
}

void main()
{
	int a,b,c;
	
	multiplevluefunction(&a,&b,&c);
	
	printf("a : %d\n,b : %d\n,c : %d\n",a,b,c);
}
