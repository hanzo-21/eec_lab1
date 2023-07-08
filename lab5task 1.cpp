/* 1. Using appropriate datatype qualifier where necessary, 
WAP to read the following input from user in the following order 
a. The ID of a staff where total number of staff is 500. 
b. The full name of a staff. 
c. The mobile number of a staff which is in the format 98XXXXXXXX. 
d. The age of the staff. 
-aayush rana magar */

#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

int main(){
	
	unsigned short int info,age;
	char name[20];
	unsigned long long int mob;
	
	fflush(stdin);
	printf("enter you name\t\t");
	gets(name);
	
	printf("enter your mobile no:\t ");
	scanf("%lld",&mob);
	
	printf("enter your age\t\t");
	scanf("%u", &age);
	
	printf("enter your id\t\t");
	scanf("%u", &info);

	printf("\nID:\t\t%u\nyour name is \t",info);
	puts(name);
	
	printf("contact no:\t%lld \nage:\t\t%u",mob,age);
	
	
	getch();
	return 0;
		
}
