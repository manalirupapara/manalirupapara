/*2.WAP to swap two variables using Pointer.*/

#include<stdio.h>

void swap(int *p1,int *p2)
{
	int i;
	 i  =  *p1;
	*p1 =  *p2;
	*p2 =   i;
}

void main()
{
	int a,b;
	 
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	
	swap(&a ,&b);
	
	printf("a = %d and b = %d\n",a,b);
}