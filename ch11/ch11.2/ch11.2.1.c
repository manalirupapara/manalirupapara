/*1. WAP to convert string into Toggle case using pointer.*/

#include<stdio.h>

void tooglecase()
{
	char a[20];
	int *ptr;
	
	ptr = &a;
	
	printf("enter name :");
	scanf("%s",&a);
	
	int i;
	
	for(i=0;i<20;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]+=32;
		}
		else if(a[i]>97 && a[i]<=122)
		{
			a[i]-=32;
		}
	}
	printf("string : %s\n",a);
}

void main()
{
		tooglecase();
}
