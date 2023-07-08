//12.create a structure employee which includes the following data
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct dob{
	int dd;
	int mm;
	int yy;
};
struct employee{
  int rollno;
	char name[20];
	
	char address[30];
	struct dob d;
};
int main(){
	int i;
	struct employee e[5];
	
	//to take input from user
	for(i=0;i<5;i++){
		
		printf("Enter the number of employee %d\n",i+1);
		
		printf("Enter your rollno.\n");
		scanf("%d",&e[i].rollno);
		printf("Enter the name\n");
		fflush(stdin);
		gets(e[i].name);
		
		printf("Enter your address\n");
		gets(e[i].address);
		printf("Enter the year of birth\n");
		scanf("%d",&e[i].d.yy);
		printf("Enter the month of birth\n");
		scanf("%d",&e[i].d.mm);
		printf("Enter the day of birth\n");
		scanf("%d",&e[i].d.dd);
		printf("............................\n");
		
	}
	printf("\nName\tRollNo\tAddress\tDate of Birth\t");
	for(i=0;i<5;i++){
		printf("\n%s\t%d\t%s\t%d\t%d\t%d\t",e[i].name,e[i].rollno,e[i].address,e[i].d.dd,e[i].d.mm,e[i].d.yy);
	}
	getch();
	return 0;
}
