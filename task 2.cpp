//2. WAP to print the following output: 
//1. Name: Your name 
//2. Roll no: Your Roll no 
//3. Faculty: Your Faculty 
#include<stdio.h>
#include<conio.h>

int main(){
	char name[20],faculty[20];
	unsigned int roll;
	
	printf("enter your name: \t");
	scanf("%s",&name);
	
	printf("\nenter your faculty: \t");
	scanf("%s",&faculty);
	
	printf("\nenter your roll no: \t");
	scanf("%d",&roll);
	
	

	printf("\n\n name : %s \n roll no : %d \n Faculty : %s",name,roll,faculty);
	getch();
	return 0;
}
