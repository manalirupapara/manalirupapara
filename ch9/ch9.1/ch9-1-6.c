#include<stdio.h>

void main()
{

	char a;
	
	printf("enter any character :");
	scanf("%c",&a);
	// toggle case
	
	if(a>=65 && a<=90)
	{
		printf("char: %c",a+32);
		
	}
	else if (a>=97 && a<=122)
	{
		printf("char : %c",a-32);
	}
}