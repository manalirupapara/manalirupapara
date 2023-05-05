/*1.WAP to create infinite calc using UDF, switch case and loop.*/


#include<stdio.h>

void clacy()
{
	int choice,a,b;
	do
	{
	
		
		printf("\nenter....\n");
		printf("1)addition\n");
		printf("2)subraction\n");
		printf("3)multipliction\n");
		printf("4)division\n");
		printf("5)modulos\n");
		printf("6)Exit\n");
		printf("\t\tenter your choice:");
		scanf("%d",&choice);


		switch(choice)
		{
			case 1:
				printf("\n\nenter a:");
				scanf("%d",&a);
				printf("\n\nenter b:");
				scanf("%d",&b);
				printf("addition:%d",a+b);

				printf("\n\nprees any key to next >>");
				
				break;
			case 2:
				printf("\n\nenter a:");
				scanf("%d",&a);
				printf("\n\nenter b:");
				scanf("%d",&b);
				printf("subtraction:%d",a-b);

				printf("\n\nprgetch()ees any key to next>>");
				
				break;

			case 3:
				printf("\n\nenter a:");
				scanf("%d",&a);
				printf("\n\nenter b:");
				scanf("%d",&b);
				printf("multipiction:%d",a*b);

				printf("\n\nprees any key to next>>");
				
				break;

			case 4:
				printf("\n\nenter a:");
				scanf("%d",&a);
				printf("\n\nenter b:");
				scanf("%d",&b);
				printf("division:%d",a/b);

				printf("\n\nprees any key to next>>");
				
				break;
			case 5:
				printf("\n\nenter a:");
				scanf("%d",&a);
				printf("\n\nenter b:");
				scanf("%d",&b);
				printf("modulos:%d",a%b);

				printf("\n\nprees any key to next>>");
			
				break;
			case 6:
				break;


		}


	} while(choice!=6);

	printf("\n-----------------------------");
	printf("\nthanks to comming my proggram");
	printf("\n-----------------------------");
	
	return(a,b);

	
	
}
void main()
{
	clacy();
	
}