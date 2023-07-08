//1. WAP to find the second largest number among three numbers.
//-aayush rana magar

#include <stdio.h>
#include <conio.h>

int main(){
	int a,b,c;
	
	printf("enter a number (a) ");
	scanf(" %d",&a);
	printf("enter a number (b) ");
	scanf(" %d",&b);
	printf("enter a number (c) ");
	scanf(" %d",&c);
	
	if(a>b && a<c || a>c&& a<b){
		printf("the second largest number among three numbers is %d.",a);
	}
	else if(b>a && b<c || b>c && b<a){
		printf("the second largest number among three numbers is %d.",b);
	}
	else{
		printf("the second largest number among three numbers is %d.",c);
	}
	getch();
	return 0;
}
