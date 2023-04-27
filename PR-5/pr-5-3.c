#include<stdio.h>

 void main ()
 {
 	int r,c;
 	 	printf("enter number of row\t :");
 	 	scanf("%d",&r);
 	 	printf("enter number of column\t :");
 	 	scanf("%d",&c);
 	 	
 	int a[r][c],b[r][c],i,j,sum=0;
 	
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
 			printf("enter b[%d][%d]:",i,j);
 			scanf("%d",&b[i][j]);
		}printf("\n");
		 
	}	
	
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
			
			printf("%d ",b[i][j]);
			
			sum = sum + a[i][j] + b[i][j];
			
		
			
		}printf("\n");
		printf("\n");
   }
		
	printf("%d",sum);
			
   
   	
}