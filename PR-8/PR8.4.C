//4. Program to find length of string using pointer.

#include<stdio.h>

void input(char a[])
{
	printf("enter name :");
	scanf("%[^\n]",&a);
	
}

void len(char a[])
{
	int i ,count=0;
	
	for(i=0;i!='\0';i++)
	{
	
		count++;
		
	}
		printf("name has %d length :",count);
}

int main()
{
	char a[20];
	
	input(a);
	len(a);
}
