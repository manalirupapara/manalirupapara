#include<stdio.h>

void main ()
{
	int n;
	
	printf("enter size of arry :");
	scanf("%d",&n);
	
	int a[n],i,choice,pos,val;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	
	do
	{
	printf("enter .....\n");
	printf("1) inster\n2)update\n3)delete\n4)display\5)exit\n enter your choice :");
	scanf("%d",&choice);


		switch (choice)
		{
			case 1:
				printf("enter position to inster :");
				scanf("%d",&pos);
				printf("enter value  to inster :");
				scanf("%d",&val);
	
				for(i=n-1;i>=pos;i--)	
				{
					a[i+1]=a[i];
				}
			
				a[pos]=val;
				n++;
				
				break;
				
			case 2:
				printf("enter position to update :");
				scanf("%d",&pos);
				printf("enter value  to update :");
				scanf("%d",&val);
				
				a[pos]=val;
				
				break;
				
			case 3:
					printf("enter position to delete :");
					scanf("%d",&pos);
	
					for(i=pos;i<n;i++){
					
						a[i] = a[i+1];
					}
					n--;
				break;
					
			case 4:	
			
				printf("\narray a: ");
				for(i=0;i<n;i++){
					printf("%d ",a[i]);
				}
				printf("\n");
				
				break;
		}
		
	}while(choice != 5);
}