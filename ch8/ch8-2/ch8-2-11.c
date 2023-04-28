#include<stdio.h>
 
 void main ()
 {
 	int r,c;
 	 	printf("enter number of row\t :");
 	 	scanf("%d",&r);
 	 	printf("enter number of column\t :");
 	 	scanf("%d",&c);
 	 	
 	int a[r][c],i,j,sum=0;
 	
 	for(i=0; i<r; i++)
 	{
 		for(j=0; j<c; j++)
 		{
 			printf("enter a[%d][%d]:",i,j);
 			scanf("%d",&a[i][j]);
		}printf("\n");
		 
	}	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i==0||j==0||j==c-1||i==r-1)
			{
				printf(" ");
			}
			else
			{
				printf("%d " ,a[i][j]);
				sum=sum + a[i][j];
				
			}
		
		}printf("\n");
	}
		printf("sum : %d ",sum);
}