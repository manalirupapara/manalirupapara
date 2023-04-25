#include<stdio.h>

void main()
{
	int n;
	
	printf("enter length of array :");
	scanf("%d",&n);
	
	int a[n],i,fact,j;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		fact=1;
		j=1;
		while (j<=a[i]){
		
			fact=fact*j;
			j++;} 
			printf("factoriyal of  a[%d] : %d =%d\n",i,a[i],fact);
			
	}
		
		
	
	
}