/*
WAP to input two floating point  variables and 
display the sum  and division of the numbers using the pointer variable.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int a,b,sum;
	float div;
	int *prt_sum;
	float *prt_div;
	
	//diffrent pointer variable was declared for division to prevent type mismatch
	
	printf("enter a ");
	scanf("%d", &a);
	printf("enter b ");
	scanf("%d", &b);
	
	sum=a+b;
	prt_sum=&sum;
	
	div=1.0 * a/b;
	prt_div=&div;
	
	printf("sum = %d \ndivision = %.2f ", *prt_sum, *prt_div);
	

	
	
	getch();
	return 0;
}
