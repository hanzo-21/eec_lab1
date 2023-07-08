//wapt o enter fisrst name and last name and then concate them

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char firstName[20],lastName[20];
	
	printf("enter first name ");
	gets(firstName);
	printf("enter last name ");
	gets(lastName);

	strcat(firstName," ");
	strcat(firstName,lastName);
	
	printf("your name is %s ",firstName);
	getch();
	return 0;
}
