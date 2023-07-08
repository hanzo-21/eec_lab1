/*
WAP to input two integer variable and display the sum using void pointer
 variable.
*/

#include"stdio.h"
#include"conio.h"
int main(){
	
	int a,b, sum;
	void *ptr;			//declare point variable
	
	printf("enter a ");
	scanf("%d", &a);
	printf("enter b ");
	scanf("%d", &b);
	
	sum=  a + b ;
	ptr=&sum;
	
	printf("sum = %d ", *(int * )ptr);
		
	getch();
	return 0;
}
