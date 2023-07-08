//wap to input a matrix of size of 3x2 and find the sum of all elements

#include<stdio.h>
#include<conio.h>

void input (int num[][2]);
int sum (int num[][2]);
void display(int );


int main(){
	
	int num[3][2];
	
	input (num);
	display(sum(num));
	
	getch();
	return 0;
}

void input(int num[][2]){
	
	int i,j;
	
	for (i=0; i<3; i++){
		for(j=0; j<2;j++){
			printf("num[%d][%d] ",i,j);
			scanf("%d", &num[i][j]);
		}
	}
}

int sum(int num[][2]){
	
	int i,j,sum=0;
	for (i=0; i<3; i++){
		for(j=0; j<2;j++){
			sum+=num[i][j];
		}
	}
	return sum;
}

void display(int n){
	
	printf("\nsum 0f all elements = %d",n);
}
