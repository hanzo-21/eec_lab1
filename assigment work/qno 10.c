/* 
WAP to input two variable and display sum,difference,multiplication,
 division using void pointer variable.
 */

#include"stdio.h"
#include"conio.h"

int main(){
	
	int a,b,sum, diff, mul;
	float div;
	void *ptr;
	

	
	printf("enter a ");
	scanf("%d", &a);
	printf("enter b ");
	scanf("%d", &b);
	
	sum=a+b;
	ptr=&sum;
	printf("\nsum = %d ", *(int * )ptr);
	
	diff=a-b;
	ptr=&diff;
	printf("\ndifference = %d ",*(int * )ptr);

	mul=a*b;
	ptr=&mul;
	printf("\nmultiply = %d ",*(int * )ptr);

	div= 1.0 * a/b;
	ptr=&div;
	printf("\ndivision = %.3f ", *(float * )ptr);


	
	getch();
	return 0;
}
