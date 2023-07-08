//2. WAP to find the sum of digit of given 3-digit number.
//-aayush rana magar

#include <stdio.h>
#include <conio.h>

int main(){
	
	int num,a,b,c,sum;
	printf("enter a 3 didgit number ");
	scanf("%d",&num);
	a=num%10;	
	b=(num/10)%10;	
	c=num/100;	
	sum=a+b+c;	
	printf("sum of digits %d ",sum);
	
	getch();
	return 0;
}
