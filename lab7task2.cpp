//2. WAP to find the factorial of a given number.
//-aayush rana magar

#include <stdio.h>
#include <conio.h>

int main(){
	
	int i, fact=1,num;
	
	printf("enter a number ");
	scanf (" %d",&num);
	
	for(i=1;i<=num;i++){
		fact=fact*i;	
	}
	printf("factorial of a given number= %d",fact);
	getch();
	return 0;
}
