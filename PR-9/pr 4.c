//

#include<stdio.h>

void main()
{
	FILE *p1;
	FILE *p2;
	
	char a[50];
	
	p1 =fopen("C:\\Users\\YOU\\Desktop\\PR 1.t.txt","w");
	
	p2 =fopen("C:\\Users\\YOU\\Desktop\\PR 2.t.txt","r");
	
	fscanf(p2,"%[^\n]",&a);
	
	printf("%s",a);
	fprintf(p1,"%s",a);

}