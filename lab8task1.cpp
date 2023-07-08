//1. WAP to print the multiplication table of specific number of user choice.
//aayush rana magar

#include <stdio.h>
#include <conio.h>

int main(){
	
	int n,m;
	
	printf("enter multiplication table of; ");
	scanf("%d",&n);
	
	for(m=1;m<=10;m++){
		
		printf("%d * %d = %d \n",n,m,m*n);
	}
	
	getch();
	return 0;
}
