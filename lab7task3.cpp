//3. WAP to find the reverse of a given number.
//-aayush rana magar
#include <stdio.h>
#include <conio.h>

int main (){
	
	int num,rev=0,qut=0;
	
	printf("enter a number ");
	scanf("%d",&num);
	
	while (num!=0){
		qut=num%10;
		rev=(rev*10)+qut;
		num=num/10;
	}
	printf("reverse : %d",rev);

	getch();
	return 0;
}
