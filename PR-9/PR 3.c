//3. C program to write even, odd and prime numbers to separate file.

#include<stdio.h>

void main()
{
	FILE *P1;
	FILE *P2;
	
	int a;
	
	printf("press any number : ");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		P1 = fopen("C:\\Users\\YOU\\Desktop\\EVEN.txt","w");
		fprintf(P1,"%d is even number",a);
	}
	else if(a%2==1)
	{
		P2 = fopen("?C:\\Users\\YOU\\Desktop\\ODD.txt","w");
		fprintf(P2,"%d is odd number",a);
	}
	
	
	
}