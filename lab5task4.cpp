/*4. WAP to show the usage of all the arithmetic operators. 
-aaysuh rana magar*/

#include <stdio.h>
#include <conio.h>

int main(){
	
	int a,b ;
	
	printf("enter a number \t");
	scanf("%d",&a);
	
	printf("enter another number\t");
	scanf("%d",&b);
	
	printf("add=%d\nsub=%d\nmul=%d\ndiv=%d\na%%d=%d",a+b,a-b,a*b,a/b,a%b);
	
	getch();
	return 0;
	
}
