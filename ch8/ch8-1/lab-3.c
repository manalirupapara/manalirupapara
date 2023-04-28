#include<stdio.h>
void main()
{
	int n;
	
		printf("enter length of array :");	
		scanf("%d",&n);
		
	int a[n],i,count=0,everage,sum=0;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
		count++;
		sum=sum+a[i];
		everage=sum/count;
	}
	
	
	
		printf("\n length of array : %d ",count);
		printf("\n sum :%d",sum);
		printf("\n everage : %d ",everage);
		
}