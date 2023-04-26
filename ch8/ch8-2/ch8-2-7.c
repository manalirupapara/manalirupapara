#include<stdio.h>
 
 void main ()
 {
 	int r,c;
 	 	printf("enter number of row\t :");
 	 	scanf("%d",&r);
 	 	printf("enter number of column\t :");
 	 	scanf("%d",&c);
 	 	
 	int a[r][c],i,j;
 	
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
			if(i==j)
			{
				printf("%d" ,a[i][j]);
			}
			else
			{
				printf("  ");
			}
		
		}printf("\n");
	}
}