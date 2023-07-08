// WAP to take two number as input from user and check which number is greater 
#include<stdio.h>
#include<conio.h>
int main(){
	int num1, num2;
	printf("enter the two numbers :\n");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2){
		printf("%d is greater than %d.",num1,num2);
	}
	else{
			printf("%d is greater than %d.",num2,num1);
	}
	return 0;
}

