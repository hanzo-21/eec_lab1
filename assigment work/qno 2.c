/*
WAP to input an floating point value ( or initialize directly ) and 
display it using point variables.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	float a=6.9;
	float *b;			//declare point variable
	
	b= &a;
	
	printf("a = %.2f ", *b);
		
	getch();
	return 0;
}
