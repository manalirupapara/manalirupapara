#include<stdio.h>

void main()
{
	int n;
	
		printf("enter length of negative elements :");
		scanf("%d",&n);
		
	int a[n],i,max;
	
		for(i=0;i<n;i++)
		{
			printf("enter a[%d]:",i);
			scanf("%d",&a[i]);
						
		}
	
	    for(i=0;i<n;i++)
	    {
	    	printf("a[%d] : %d\n",i,a[i]);
		}
		max=a[0];
		
		for(i=1;i<n;i++)
		{
			if(max<a[i])
			{
				max = a[i];
			}
		}
		
		printf("\nlargest array element is : %d ",max);
		
		
}