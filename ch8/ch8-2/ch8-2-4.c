#include<stdio.h>
 
 void main ()
 {
 	int r,c;
 	 	printf("enter number of row\t :");
 	 	scanf("%d",&r);
 	 	printf("enter number of column\t :");
 	 	scanf("%d",&c);
 	 	
 	int a[r][c],b[r][c],s[r][c],i,j,sum=0;
 	
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
			sum = sum + a[i][j];
			sum = sum + b[i][j];
			s[r][c] = + sum;
			
		
			
		}printf("\n");
		printf("\n");
   }
		

			
   
   		printf("\n sum : %d " ,sum );
   		printf("\n s[r][c] : %d ",s[r][c]);

}