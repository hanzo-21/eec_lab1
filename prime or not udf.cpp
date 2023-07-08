//check if number is prime or not ;



#include<stdio.h>
#include<conio.h>

int prime(int);

int main(){
	
	int num;
	
	printf("enter number ");
	scanf("%d",&num);
	
	if (prime(num)==1)
		printf("%d is prime",num);
	else
		printf("%d is NOT  a prime number",num);
	
	
	
	getch();
	return 0;
}


int prime(int x){
	
	int i,a=1;
	
	for (i=2;i<x/2;i++){
		if (x%i==0){
			a=0;
			break;
		}
	}
	
	return a;
}





