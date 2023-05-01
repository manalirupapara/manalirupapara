#include<stdio.h>

void main()
{
	int i ;
	char a[i];
	
		printf("enter any name :");
		scanf("%s",&a);
		
		for(i=0;i<20;i++)
		{
			if(a[i]>=65 && a[i]<=90)
			{
				printf("%c",a[i]+=32);
				
			}
		}
	
}