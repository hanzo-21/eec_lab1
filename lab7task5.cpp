//5. WAP to find the sum of digits of given number.
//-aayush rana magar 

#include <stdio.h>
#include <conio.h>

int main (){
	
	int num,sum,qut=0;
	
	printf("enter a number ");
	scanf("%d",&num);

	while (num!=0){
		qut=num%10;
		sum=sum+qut;
		num=num/10;
	}
	printf("sum = %d",sum);

	getch();
	return 0;
}
