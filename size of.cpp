// WAP to display the size of varaibales
#include<stdio.h>
#include<conio.h>
 	main(){
	//variable declations 
	int a;
	float b;
	double c;
	char d;
	 
	//size of variable 
	printf("the size of int: %d bytes \n", sizeof(a));
	printf("the size of float: %d bytes \n", sizeof(b));
	printf("the size of double: %d bytes \n", sizeof(c));
	printf("the size of char: %d bytes \n", sizeof(d));
	getch();
}
