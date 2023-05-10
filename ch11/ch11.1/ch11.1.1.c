
























/*1.WAP to find square of each element using Pointer.*/

#include<stdio.h>

void main()
{
	int a,*ptr,square;
	
	ptr = &a;
	
	printf("enter any number :");
	scanf("%d",ptr);
	
	square = a*a;
	
	printf("%d",square);
}