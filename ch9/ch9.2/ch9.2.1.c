/*1.WAP to check of a given password is valid or not by
satisfying below criteria:
(1)password must wntains at least one letter,one
digit and one special symbol.*/
/*(2)password must br at least of 6 characters.*/


#include<stdio.h>
#include<string.h>

void main()
{
	
	char pass[6];
	int i,length=0,count=0,sp=0,letter=0,digit=0;
	
	printf("enter your password :");
	gets("pass");
	
	for(i=0;i<7;i++)
	{
		
		if(i>=65&&i<=90 || i>97 && i<=122)
		{
			letter ++;
		}
		else if(i>48 && i<=57)
		{
			digit++;
		}
		else
		{
			sp++;
		}
	}
	length=strlen(pass);
	
	printf("letters",letter);
	printf("digit",digit);
	printf("special character",sp);
	printf("length",length);
	
	if(length>6 && sp>0 && digit>0 && length>0)
	{
		printf("your password is valid");
		
	}
	else
	{
		printf("your password is invalid");
	}
	
}