//wap to input a matrix of size of 2x3 and display it using function

#include<stdio.h>
#include<conio.h>

void input (int num[][3]);
void display(int num[][3]);


int main(){
	
	int num[2][3];
	
	input (num);
	display(num);
	
	getch();
	return 0;
}

void input(int num[][3]){
	
	int i,j;
	
	for (i=0; i<2; i++){
		for(j=0; j<3;j++){
			printf("enter element num[%d][%d] ",i,j);
			scanf("%d", &num[i][j]);
		}
	}
}

void display(int num[][3]){
	
	int i,j;
	for (i=0; i<2; i++){
		for(j=0; j<3;j++){
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
}
