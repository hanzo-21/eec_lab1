//1. WAP to find the power of a number using pow() function. 
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int num, p, result;
	
	printf("enter a number\t");
	scanf("%d",&num);
	printf("\nenter power of the number\t");
	scanf("%d",&p);
	result=pow(num,p);
	printf("%d to the power of %d is equal to %d.",num,p,result);
	getch();
	return 0;
	
}
