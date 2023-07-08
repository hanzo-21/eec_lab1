/*2. WAP to read an integer number and a floating point number and 
increment their value once using unary operator and display it. 
-aayush rana magar*/

#include <stdio.h>
#include <conio.h>


int main(){
	
	int num1,numa;
	float num2,numb;
	
	printf("enter integer number\t");
	scanf("%d",&num1 );
	
	printf("enter floating point number\t");
	scanf("%f",&num2);
	
	numa= num1++;
	numb= num2++;	
	
	printf("increment of %d integer value once using unary operator is %d",numa,num1);
	printf("\nincrement of %f float value once using unary operator is %f",numb,num2);
	
	getch();
	return 0;
}
