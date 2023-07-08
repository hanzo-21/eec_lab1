//wap to input a matrix of size of 3x4 and find the sum of all elements

#include<stdio.h>
#include<conio.h>

void input (int num[][4],int arr[][4]);
void sum (int mat[][4],int num[][4], int arr[][4]);
void display(int mat[][4] );


int main(){
	
	int num[3][4], arr[3][4],mat[3][4];
	
	input (num,arr);
	sum(mat,num,arr);
	display(mat);
	
	
	getch();
	return 0;
}

void input(int num[][4], int arr[][4]){
	
	int i,j;
	
	printf("enter element ofbfor 1st matrix\n");
	for (i=0; i<3; i++){
		for(j=0; j<4;j++){
			printf("num[%d][%d] ",i,j);
			scanf("%d", &num[i][j]);
		}
	}
	
	printf("\nenter element for 2st matrix\n");
	for (i=0; i<3; i++){
		for(j=0; j<4;j++){
			printf("num[%d][%d] ",i,j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void sum(int mat[][4],int num[][4],int arr[][4]){
	
	int i,j;
	for (i=0; i<3; i++){
		for(j=0; j<4;j++){
			mat[i][j]=num[i][j]+arr[i][j];
		}
	}
}

void display(int mat[][4]){
	
	int i,j;
	printf ("sum of matrixs \n");
	for (i=0; i<3; i++){
		for(j=0; j<4;j++){
			printf("%d\t", mat[i][j]);
			
		}
		printf("\n");
	}
}
