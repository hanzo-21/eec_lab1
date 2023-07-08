//wap to input two numbers and add sub mil or divider using functionh

#include<stdio.h>
#include<conio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);

int main(){
	
	int a,b;
	
	printf("enter a ");
	scanf("%d",&a);
	printf("enter b ");
	scanf("%d",&b);
	
	printf("sum (a+b) =%d\ndifference (a-b) = %d\nmultiplacation (a*b) = %d\ndivision (a/b) = %.2f",add(a,b),sub(a,b),mul(a,b),div(a,b));
	
	getch();
	return 0;
}

int add(int x,int y){
	return x+y;
}

int sub(int x,int y){
	return x-y;
}

int mul(int x,int y){
	return x*y;
}

float div(int x, int y){
	return 1.00*x/y;	
}


