/*2.WAP to find if a given nunmber is divisible by 3 & 5
both or not using UDF.*/

#include<stdio.h>
void div()
{
	int a;
	printf("enter any number :");
	scanf("%d",&a);
	 
		if(a%3==0 && a%5==0)
		{
			printf("number is divisible by 3 & 5 both :");
			
		}
		else
		{
			printf("unmber is divisible by 3 & 5 both or not :");
		}

	
	
}
void main()
{
	div();
}