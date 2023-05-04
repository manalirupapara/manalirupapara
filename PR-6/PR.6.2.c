/*1. Write C program to count frequency of each character in a string.*/

#include<stdio.h>
#include<string.h>

int main()
{
	
	char str[30];
	int i,j,count=0,n;
	
	printf("enter any string :");
	gets(str);
	
	for(j=0;str[j];j++)
	n=j;
	
	printf("freq count charcter in string :\n");
	
	for(i=0;i<n;i++)
	{
		count=1;
		if(str[i])
		{
			for(j=i+1;j<=n;j++)
			{
				if(str[i]==str[j])
				{
					count++;
					str[j]=NULL;
				}
			}
			printf("%c=%d\n",str[i],count);
		}
	}
	
	
	
	
}