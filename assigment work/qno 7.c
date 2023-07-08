/*
WAP to input an floating-point value(or initialize directly) and
 display it using void pointer variable.
*/

#include"stdio.h"
#include"conio.h"
int main(){
	
	float a=666;
	void *b;			//declare void pointer variable
	
	b= &a;
	
	printf("a = %.2f ", *(float * )b);
		
	getch();
	return 0;
}
