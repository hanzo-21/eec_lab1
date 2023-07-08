//WAP to check if a person is eligible to vote (a person is eligible to vote if he/she is 18) 
#include<stdio.h>
#include<conio.h>

int main(){
	int age;
	
	printf("Enter your age:\t");
	scanf("%d",&age);
	if(age>18){
		printf("you are eligible to vote.");
	}
	else{
		printf("you are not eligible to vote yet.");
	}
	getch();
	return 0;	
}
