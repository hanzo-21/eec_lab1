//1. WAP to search a value in the array of size n if the value is found then print “found!”
//Else print “not found!”.
//aayush rana magar

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (){
	
	int num, set[10]={1,2,3,4,5,56,6,7,8,9},n,i,check;
	
	printf("enter number of terms (n)");
	scanf("%d",&n);
	printf("enter search number (num) ");
	scanf("%d",&num);
	
	for(i=0;i<=n;i++){
	
		if(set[i] == num){
			check=1;
			break ;
		}
	}
	
	if (check==1){
		printf("found!");
	}
	else{
		printf("not found!");
	}
	getch();
	return 0;
}
