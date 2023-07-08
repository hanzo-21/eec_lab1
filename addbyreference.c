//wap to input two numbers and using function refference by value

#include<stdio.h>
#include<conio.h>
#define num = 69    // golbal variable 

void add(int, int, int *);

int main(){
	
	int a,b,result=0;
	
	printf("enter a ");
	scanf("%d",&a);
	printf("enter b ");
	scanf("%d",&b);
	

	add(a,b,&result);	
	
	printf("sum= %d ", result);	
	getch();
	return 0;
}

void add(int x, int y, int *z ){
	
	*z=x+y;
}


