/* structure employe 
name|roll number| address |date of birth|
						  |day|mon|year|
					
*/

#include<conio.h>
#include<stdio.h>
#include<conio.h>

struct date{
	int day;
	int month;
	int year;
};	

struct employe{
	char name[20];
	int roll;
	char address[20];
	struct date dob;
};


int main (){
	
	struct employe worker;
	
	//input 
	printf("enter name ");
	gets(worker.name);
	printf("enter rollnumber ");
	scanf("%d", &worker.roll);
	printf("enter address ");
	fflush(stdin);
	gets(worker.address);
	printf("enter day of birth ");
	scanf("%d", &worker.dob.day);
	printf("enter  month of birth ");
	scanf("%d", &worker.dob.month);
	printf("enter year of birth  ");
	scanf("%d", &worker.dob.year);
	
	//display
	
	printf("name\t\t|rollnumber\t|address\t|DOB(dd/mm/yyyy)\n");
	printf("%s\t\t|%d\t|%s\t|%d/%d/%d",worker.name,worker.roll,worker.address,worker.dob.day,worker.dob.month,worker.dob.year);
	
	
	
	getch();
	return 0;
}
