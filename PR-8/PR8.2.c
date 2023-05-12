//2. C program to input and print array elements using pointers
#include<stdio.h>

void araryinput(int a[],int n);

void main()
{

	
	int n;
	
		printf("enter lengh of array :");
		scanf("%d", &n);
		
	int a[n];
	int *ptr;
	
	ptr = &a;
	
	arrayinput(a,n);
	
	int i;
	 
		for(i=0;i<n;i++)
		{
			printf("a[%d]:%d\n",i,*(ptr+i));
			
		}
}

void arrayinput(int a[],int n)
{
	int i;
	
		for(i=0;i<n;i++)
		{
			printf("enter %d element :",i);
			scanf("%d",&a[i]);
		}
}