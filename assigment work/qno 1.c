/*
WAP to input an integral value ( or initialize directly ) and 
display it using point variables.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int a=96;
	int *b;			//declare point variable
	
	b= &a;
	
	printf("a = %d ", *b);
		
	getch();
	return 0;
}
