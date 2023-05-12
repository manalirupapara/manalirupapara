			/*1.WAP to student record system using structure.
			Consider >eDow mentioned attri>utes in Student’s
			structureI
			= stu_iC
			= stu_nam?
			= stu_ag?
			= stu_cours?
			= stu_cit1
			= stu_stC
			= stu_schooD*/
			
#include<stdio.h>

struct student
{
	int 	id;
	char 	name[30];
	int 	age;
	char 	cours[30];
	char 	city[30];
	int 	std;
	char 	school[30];
};

void main()
{
	int n,i;
	
	printf("enter number of students:");
	scanf("%d",&n);
	
	struct student s[n];
	
	system("cls");
	
	for(i=0;i<n;i++)
	{
		printf("student (%d/%d)\n\n",i+1,n);
		
		printf("enter id\t: ");
		scanf("%d",&s[i].id);
		printf("enter name\t: ");
		scanf("%s",&s[i].name);
		printf("enter age\t: ");
		scanf("%d",&s[i].age);
		printf("enter cours\t: ");
		scanf("%s",&s[i].cours);
		printf("enter city\t: ");
		scanf("%s",&s[i].city);
		printf("enter std\t: ");
		scanf("%d",&s[i].std);
		printf("enter school\t: ");
		scanf("%s",&s[i].school);
		
		system("cls");
	}
	
	printf("id\tname\tage\tcours\tcity\tstd\tschool\n\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",s[i].id);
		printf("%s\t",s[i].name);
		printf("%d\t",s[i].age);
		printf("%s\t",s[i].cours);
		printf("%s\t",s[i].city);
		printf("%d\t",s[i].std);
		printf("%s\n",s[i].school);
	}
	
}