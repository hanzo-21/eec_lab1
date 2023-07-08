//1. WAP to search a value in the array of size n if the value is found then print “found!”
//Else print “not found!”.
//aayush rana magar

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (){
	
	int num, set[10]={1,2,3,4,5,56,6,7,8,9},n;
	
	printf("enter number of terms (n)");
	scanf("%d",&n);
	printf("enter search number (num) ");
	scanf("%d",&num);
	
	while (n>=0){
		
		if(set[n] == num){
			printf("found!");
			exit(1);
		}
	}
	
	printf("not found !");
	getch();
	return 0;
}
