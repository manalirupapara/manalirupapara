//2. C program to read a file and display its contents.


#include<stdio.h>

void main()
{
	FILE *p1;
	
	char a[40];
	
	
	p1 = fopen("C:\\Users\\YOU\\Desktop\\PR 1.t.txt","r");
	
	fscanf(p1,"%s",a);
	printf("name : %s",a);
}