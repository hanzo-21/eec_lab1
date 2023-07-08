//wap to input two numbers and using function call by value

#include<stdio.h>
#include<conio.h>

void swap(int , int);

int main(){
	
	int a,b;
	
	printf("enter a ");
	scanf("%d",&a);
	printf("enter b ");
	scanf("%d",&b);
	
	printf("before swap\n a= %d, b= %d",a,b);
	
	swap(a,b);
	
	getch();
	return 0;
}

void swap(int x, int y){
	
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nafer swap\n a= %d, b= %d",x,y);
	
	
}







