//4. WAP to check if a given number is palindrome or not.
//-aayush rana magar
#include <stdio.h>
#include <conio.h>

int main (){
	
	int num,i,rev=0,qut=0;
	
	printf("enter a number ");
	scanf("%d",&num);
	i=num;
	while (num!=0){
		qut=num%10;
		rev=(rev*10)+qut;
		num=num/10;
	}
	if (i==rev){
		printf("%d number is palindrome",i);
	}
	else{
		printf("%d number is not palindrome",i);
	}

	getch();
	return 0;
}
