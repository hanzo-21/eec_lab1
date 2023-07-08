//wap to input two numbers and using function refference by value

#include<stdio.h>
#include<conio.h>

   // golbal variable 
void add(int, int);
int num =0 ;



int main(){
	
	int a,b,result=0; // local variable 
	
	printf("enter a ");
	scanf("%d",&a);
	printf("enter b ");
	scanf("%d",&b);
	

	add(a,b);	
	
	printf("sum= %d ", num);	
	getch();
	return 0;
}

void add(int x, int y ){
	
	num=x+y;
}


