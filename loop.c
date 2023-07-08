#include<stdio.h>
#include<conio.h>
main(){

	int number1, number2, multiply, loop1, loop2;
	
	number2=1;
	do{
		
	number1=1;
		loop2=1;
		printf("multiple of %d\n", number2);
	
		do{
			multiply= number1*number2;
			printf("%d*%d=%d \n ", number1, number2, multiply);
			number1=number1+1;
			loop2=loop2+1;
			
		}
		while(loop2<=10);
		
		loop1=loop1+1;
		number2=number2+1;
		printf("------------------------------------------------------------------------------------------\n");
		
	}
	
	while(loop1<10);
	getch();
}
