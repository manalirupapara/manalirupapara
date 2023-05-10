/*2. WAP to get cube of any int using pointer with udf.*/

#include<stdio.h>

void cube()
{
	
	int a,cube;
	int *ptr;
	
	ptr = &a;
	
	printf("enter a:");
	scanf("%d",&a);
	
	cube = a*a*a;
	printf("cube : %d",cube);
	
}

void main()
{
	cube();
	
}
