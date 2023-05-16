//

#include<stdio.h>

void main()
{
	FILE *p1;
	
	char a[40]="hello i am manali";
	
	
	p1 = fopen("C:\\Users\\YOU\\Desktop\\PR 1.t.txt","r");
	
	fscanf(p1,"%s",a);
}