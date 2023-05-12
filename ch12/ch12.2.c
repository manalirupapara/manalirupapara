/*2.WAP to empDoyee record system using structure.
Consider >eDow mentioned attri>utes in EmpDoyee’s
structureI
= emp_iC
= emp_nam?
= emp_ag?
= emp_roD?
= emp_cit1
= emp_experienc?
= emp_company_name*/

#include<stdio.h>

struct employee
{
	int 	id;
	char 	name[30];
	int 	age;
	char 	role[30];
	char 	city[30];
	int 	experience;
	char 	companyname[60];
};

void main()
{
	int n,i;
	
	printf("enter number of employees:");
	scanf("%d",&n);
	
	struct employee e[n];
	
	system("cls");
	
	for(i=0;i<n;i++)
	{
		printf("employees (%d/%d)\n\n",i+1,n);
		
		printf("enter id\t: ");
		scanf("%d",&e[i].id);
		printf("enter name\t: ");
		scanf("%s",&e[i].name);
		printf("enter age\t: ");
		scanf("%d",&e[i].age);
		printf("enter role\t: ");
		scanf("%s",&e[i].role);
		printf("enter city\t: ");
		scanf("%s",&e[i].city);
		printf("enter experience\t: ");
		scanf("%d",&e[i].experience);
		printf("enter company name\t: ");
		scanf("%s",&e[i].companyname);
		
		system("cls");
	}
	
	printf("id\tname\tage\trole\tcity\texperience\tcompanyname\n\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",e[i].id);
		printf("%s\t",e[i].name);
		printf("%d\t",e[i].age);
		printf("%s\t",e[i].role);
		printf("%s\t",e[i].city);
		printf("%d\t",e[i].experience);
		printf("%s\n",e[i].companyname);
	}
	
}