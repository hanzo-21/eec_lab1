//3. WAP to check if a number is greater than 10 
#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	
	printf("Enter a number :\t");
	scanf("%d",&num);
	
	if(num>10){
		printf("%d is greater than 10",num);
	}
	else{ //false
		printf("%d is not greater than 10",num);
	}
	getch();
	return 0;	
}
