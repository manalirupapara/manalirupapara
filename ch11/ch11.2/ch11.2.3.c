/*3. WAP to toggle any character using pointer with UDF.*/

#include<stdio.h>

void tooglecase()
{
	char a;
	int *ptr;
	
	ptr = &a;
	
	printf("enter name :");
	scanf("%c",&a);
	

		if(a>=65 && a<=90)
		{
			a+=32;
		}
		else if(a>97 && a<=122)
		{
			a-=32;
		}
	
	printf("%c",a);
}

void main()
{
		tooglecase();
}



