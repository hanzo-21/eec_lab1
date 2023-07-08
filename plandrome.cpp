//wap to enter a string check if plaendrom or not

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char name[20],copy[20];
	int i;
	
	printf("enter word ");
	gets(name);
	
	strcpy(copy,name);
	strrev(copy);
	i=strcmp(name,copy);
	
	if(i==0)
		printf("%s is a Palindrome", name);
	else
		printf("%s is NOT a Palindrome",name);
		
	getch();
	return 0;
}
