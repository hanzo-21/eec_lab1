//2. WAP to find the square root of a number using sqrt() function. 
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int num ;
	float result;
	
	printf("Enter a number.\t");
	scanf("%d",&num);

	result= sqrt(num);
	printf("square root of %d is %.2f",num,result);
	getch();
	return 0;
	
}
