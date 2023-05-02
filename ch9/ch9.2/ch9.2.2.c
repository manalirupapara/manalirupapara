/*2.WAP to create login mechanism by entering right email &
password.*/


#include<stdio.h>
#include<string.h>

void main()
{
	
	char email[30] ="manalirupa5@gmail.com";
	char password[30] = "manali@14";
	
	char e[30],p[30];
		printf("enter email : ");
		scanf("%s",&e);
		printf("enter password : ");
		scanf("%s",&p);


			
			
	if(strcmp(email,e)==0 && strcmp(password,p)==0)
	{
		printf("loning is succes");
	}
	else
	{
		printf("loning is faile");
	}
	
}