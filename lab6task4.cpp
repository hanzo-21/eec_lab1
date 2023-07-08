//4. WAP to find the reverse of a given 3-digit number.
//aayush rana magar

#include <stdio.h>
#include <conio.h>

int main(){
	
	int num,a,b,c,sum;
	printf("enter a 3 didgit number ");
	scanf("%d",&num);
	a=num%10;	
	b=(num/10)%10;	
	c=num/100;	
	sum=100*a+10*b+c;	
	printf("invers of %d is %d ",num,sum);
	
	getch();
	return 0;
}
