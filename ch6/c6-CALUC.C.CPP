#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int choice,a,b;
	do
	{
		clrscr();
		P("\nenter....\n");
		P("1)addition\n");
		P("2)subraction\n");
		P("3)multipliction\n");
		P("4)division\n");
		P("5)modulos\n");
		P("6)Exit\n");
		P("\t\tenter your choice:");
		scanf("%d",&choice);


		switch(choice)
		{
			case 1:
				P("\n\nenter a:");
				scanf("%d",&a);
				P("\n\nenter b:");
				scanf("%d",&b);
				P("addition:%d",a+b);

				P("\n\nprees any key to next >>");
				getch();

				break;
			case 2:
				P("\n\nenter a:");
				scanf("%d",&a);
				P("\n\nenter b:");
				scanf("%d",&b);
				P("subtraction:%d",a-b);

				P("\n\nprees any key to next>>");
				getch();
				break;

			case 3:
				P("\n\nenter a:");
				scanf("%d",&a);
				P("\n\nenter b:");
				scanf("%d",&b);
				P("multipiction:%d",a*b);

				P("\n\nprees any key to next>>");
				getch();
				break;

			case 4:
				P("\n\nenter a:");
				scanf("%d",&a);
				P("\n\nenter b:");
				scanf("%d",&b);
				P("division:%d",a/b);

				P("\n\nprees any key to next>>");
				getch();
				break;
			case 5:
				P("\n\nenter a:");
				scanf("%d",&a);
				P("\n\nenter b:");
				scanf("%d",&b);
				P("modulos:%d",a%b);

				P("\n\nprees any key to next>>");
				getch();
				break;
			case 6:
				break;


		}


	} while(choice!=6);

	P("\n-----------------------------");
	P("\nthanks to comming my proggram");
	P("\n-----------------------------");

	getch();

}