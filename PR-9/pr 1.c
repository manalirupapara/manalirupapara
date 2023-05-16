//1. C program to create a file and write data into file.

#include<stdio.h>

void main()
{
	FILE *p1;
	
	char a[40]="hello i am manali";
	
	
	p1 = fopen("C:\\Users\\YOU\\Desktop\\PR 1.t.txt","w");
	
	fprintf(p1,"%s",a);
}