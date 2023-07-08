// wap to input an array of n elements and display using a function 

#include<stdio.h>
#include<conio.h>

void display (int num[], int n );

void input (int num[], int n);	

int main(){
	
	int num[20] ,n;
	
	printf("enter n ");
	scanf("%d", &n);
	
	input(num, n);
	display(num,n);
	
	getch();
	return 0;
}


void input(int num[], int n){
	
	int i;
	
	printf("enter %d numbers\n");
	for (i=0 ; i<n ; i++){
		scanf("%d", &num[i]);
	}
	
}

void display(int num[], int n){
	
	int i;
	
	printf("numbers in array");
	for(i=0; i<n ; i++)
		printf("\n%d", num[i]);
	
	
}

