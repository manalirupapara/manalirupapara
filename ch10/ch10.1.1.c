/*1.WAP to find cube of given no using UDF.*/

#include<stdio.h>
int cube()
{
	int a,cube;
	printf("enter any number :");
	scanf("%d",&a);
	cube=a*a*a;
	printf("cube of is %d\n ",cube);
	
	
}
	void main()
{
	cube();	
}