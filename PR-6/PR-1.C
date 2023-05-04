/*2. Write C program to check whether a string is palindrome or not.*/

#include<stdio.h>
#include<string.h>

int main()
{
char str1[20],str2[20];
int count =0,i;

printf("enter first name:");
gets(str1);

strcpy(str2,str1);
strrev(str2);
count=strcmp(str1,str2);

		if(count==0)
		{
			printf("%s is pallindrom!!\n",str1);
			
		}
		else 
		{
			printf("%s is not pallindrom!!\n",str1);
			
		}
		printf("name1\t:");
		puts("a");
		printf("name2\t:");
		puts("b");
		printf("comparison\t:%d",count);
	
	
}