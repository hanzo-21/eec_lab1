//1. WAP to swap two numbers without using third variable.
//-aayush rana magar

#include <stdio.h>
#include <conio.h>

int main (){
	
	int a=6, b=9;
	
	printf("befor swap value of a is %d and b is %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swap value of a is %d and b is %d",a,b);
	 
	getch();
	return 0;

}
