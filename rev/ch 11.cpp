#include<stdio.h>

void input(int*);
void arrayinput(int[],int);
void arraydisplay(int[],int);

void arryCRUD(int[]int*);
void insert(int[],int**,int,int);
void update(int[],int,int);
void delet(int[],int**,int);

void main()
{
	int n;
	input(&n);
	int a[n];
	
	arrayinput(a,n);
	arraydisplay(a,n);
	
	arrayCRUD(a,&n);
	
}

void arrayinput(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("enter %d value: ",i+1);
		scanf("%d",&a[i]);
	}
}

void arraydisplay(int a[],int n){
	int i;
	
	for(i=0;i<n;i++){
		printf("%d element: %d\n",i+1,a[i]);	
	}
}

void arrayCRUD(int a[],int *n){
	
	int choice;
	int pos,val;
	
	do
	{
		printf("1) Insert\n2) update\n3) delete\n4) display5) exit\nEnter your choice");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 1:
				printf("Enter position: ");
				scanf("%d",&pos);
				printf("Enter value: ");
				scanf("%d",&val);
				
				insert(a,&n,pos,val);
				break;
				
			case 2:
				printf("Enter position: ");
				scanf("%d",&pos);
				printf("Enter value: ");
				scanf("%d",&val);
				
				update(a,pos,val);
				break;
				
			case 3:
				printf("Enter position: ");
				scanf("%d",&pos);
				
				delet(a,&n,pos);
				break;
				
			case 4:
				arraydisplay(a,*n);
				break;
				
			case 5:
				break;
				
				
		}
	}while(choice!=5);
}

void insert(int a[],int **n,int p,int v){
	int i;
	
	for(i= **n;i>=p;i--){
		a[i] = a[i-1];
		
	}
	
	a[p] = v;
	++ **n;
}

void update(int a[],int p,int v){
	a[p] = v;
	
}

void delet(int a[],int **n,int p){
	int i;
	
	for(i=p;i<= **n;i++){
		a[i] = a[i+1];
	}
	
	-- **n;
}