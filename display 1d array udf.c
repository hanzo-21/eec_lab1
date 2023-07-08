// wap to input n elements and display using a function 

#include"stdio.h"
#include"conio.h"

void display( int []);

int main(){
	int i, n , num[20];
	
	printf("enter number of numbers ");
	scanf("%d", &n);
	printf("enter %d numbers \n",n);
	
	for (i=0; i<n ; i++)
		scanf("%d", &num[i]);
		
	display(num);
		
	getch();
	return 0;
}

void display( int num []){
	
	int i;
	for(i=0;num[i]!= '\0' ;i++)
		printf("\n%d", num[i]);
}




