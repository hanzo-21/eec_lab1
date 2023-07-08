/* 3. WAP to read two number and display the smaller number using ternary operator
 (do not use if-else statement in this program). 
-aayush rana magar */

#include <stdio.h>
#include <conio.h>

int main(){
	
	int num1,num2,small;
	
	printf("enter a number\t");
	scanf("%d",&num1);
	
	printf("enter anoter number\t");
	scanf("%d",&num2);
	
	small=(num1<num2)?num1:num2;
	
	printf("%d is smaller.",small);
	
	getch();
	return 0;
	
}
