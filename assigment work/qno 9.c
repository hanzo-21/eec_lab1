/*
WAP to input two floating-point variable and display the sum and
 division using void pointer variable.
*/

#include"stdio.h"
#include"conio.h"
int main(){
	
	int a,b,sum;
	float div;

	void *prt;
	
	//diffrent pointer variable was declared for division to prevent type mismatch
	
	printf("enter a ");
	scanf("%d", &a);
	printf("enter b ");
	scanf("%d", &b);
	
	sum=a+b;
	prt=&sum;
	
	printf("sum = %d \n", *(int *)prt);
	
	div=1.0 * a/b;
	prt=&div;
	
	printf("division = %.2f ", *(float * )prt);
	

	
	
	getch();
	return 0;
}
