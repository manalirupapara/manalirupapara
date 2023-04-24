#include<stdio.h>

void main ()
{
	int n;
	printf("enter length of array :");
	scanf("%d",&n);
	
	int i,sum=0,a[n];
	
	for(i=0;i<n;i++)
	{	
	printf("enter a[%d]:",i);
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : %d",i,sum);
		sum=sum+a[i];
	}
	
}