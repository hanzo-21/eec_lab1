/*
WAP to input two integral variables and  
display the sum using the pointer variable.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int a,b, sum;
	int *ptr;			//declare point variable
	
	printf("enter a ");
	scanf("%d", &a);
	printf("enter b ");
	scanf("%d", &b);
	
	sum=  a + b ;
	ptr=&sum;
	
	printf("sum = %d ", *ptr);
		
	getch();
	return 0;
}
