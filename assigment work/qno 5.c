/* 
WAP to input two integral  variables and  
display the sum , difference , multiplication  and division  of the numbers using the pointer variable.
*/

#include"stdio.h"
#include"conio.h"

int main(){
	
	int a,b,sum, diff, mul;
	float div;
	int *ptr_int;
	float *ptr_float;
	
	//diffrent pointer variable was declared for division to prevent type mismatch

	
	printf("enter a ");
	scanf("%d", &a);
	printf("enter b ");
	scanf("%d", &b);
	
	sum=a+b;
	ptr_int=&sum;
	printf("\nsum = %d ", *ptr_int);
	
	diff=a-b;
	ptr_int=&diff;
	printf("\ndifference = %d ", *ptr_int);

	mul=a*b;
	ptr_int=&mul;
	printf("\nmultiply = %d ", *ptr_int);

	div= 1.0 * a/b;
	ptr_float=&div;
	printf("\ndivision = %.3f ", *ptr_float);


	
	getch();
	return 0;
}
