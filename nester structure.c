#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct date{
	
	int day;
	int month;
	int year;
};

struct student{
	
	int id;
	char name[50];
	int roll;
	float marks;
	struct date dob;
};


int main(){
	
	//we are not using array so 3 different structure is declared
	struct student std1, std2, std3;
	
	//for student number 1
	
	printf("for student number 1 \n\nenter id ");
	scanf("%d",&std1.id);
	fflush(stdin);
	printf("enter name ");
	gets(std1.name);
	printf("enter roll number ");
	scanf("%d",&std1.roll);
	printf("enter marks ");
	scanf("%f", &std1.marks);
	printf("enter day of birth ");
	scanf("%d", &std1.dob.day);
	printf("enter month of birth ");
	scanf("%d", &std1.dob.month);
	printf("enter year of birth ");
	scanf("%d", &std1.dob.year);
	
	//for student number 2
	printf("\nfor student number 2 \n\nenter id ");
	scanf("%d",&std2.id);
	fflush(stdin);
	printf("enter name ");
	gets(std2.name);
	printf("enter roll number ");
	scanf("%d",&std2.roll);
	printf("enter marks ");
	scanf("%f", &std2.marks);
	printf("enter day of birth ");
	scanf("%d", &std2.dob.day);
	printf("enter month of birth ");
	scanf("%d", &std2.dob.month);
	printf("enter year of birth ");
	scanf("%d", &std2.dob.year);
	
	// for student number 3
	printf("\nfor student number 3 \n\nenter id ");
	scanf("%d",&std3.id);
	fflush(stdin);
	printf("enter name ");
	gets(std3.name);
	printf("enter roll number ");
	scanf("%d",&std3.roll);
	printf("enter marks ");
	scanf("%f", &std3.marks);
	printf("enter day of birth ");
	scanf("%d", &std3.dob.day);
	printf("enter month of birth ");
	scanf("%d", &std3.dob.month);
	printf("enter year of birth ");
	scanf("%d", &std3.dob.year);
	
	// display 
	
	printf("ID\tNAME\t\tROLLNO\tMARKS\tDOB(dd/mm/yyyy)\n");
	printf("%d\t%s\t\t%d\t%.2f\t(%d/%d/%d)\n",std1.id,std1.name,std1.roll,std1.marks,std1.dob.day,std1.dob.month,std1.dob.year);
	printf("%d\t%s\t\t%d\t%.2f\t(%d/%d/%d)\n",std2.id,std2.name,std2.roll,std2.marks,std2.dob.day,std2.dob.month,std2.dob.year);
	printf("%d\t%s\t\t%d\t%.2f\t(%d/%d/%d)",std3.id,std3.name,std3.roll,std3.marks,std3.dob.day,std3.dob.month,std3.dob.year);
	
	
	getch();
	return 0;
}
