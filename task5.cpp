//WAP to check if a number is negative or not 
#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	
	printf("Enter a number : \t");
	scanf("%d",&num);
	
	if(num<0){
		printf("%d is a negative number.",num);
	}
	else{
		printf("%d is not a negative number.",num);
	}
	getch();
	return 0;	
}
