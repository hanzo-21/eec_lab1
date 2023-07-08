//wap to input a matrix of size of mxn and pxq  and find the matrix multiplacaion of using fucntion

#include<stdio.h>
#include<conio.h>

void input (int num1[][20] ,int, int, int num2[][20], int);
void mult (int res[][20],int num1[][20] ,int, int, int num2[][20], int);
void display(int res[][20], int m, int q);


int main(){
	
	int num1[20][20], num2[20][20], res[20][20], m,n,p,q;
	
	printf("enter row and column of 1st matrix \n");
	scanf("%d%d", &m,&n);
	printf("enter row and column of 2st matrix \n");
	scanf("%d%d", &p,&q);
	

	
	if (n==p){
		input (num1,m,n,num2,q);
		mult (res,num1,m,n,num2,q);
		display(res,m,q);
	}
	else 
		printf("\n multiplaction not possible");
	
	getch();
	return 0;
}

void input (int num1[][20] ,int m, int n, int num2[][20], int q){
	
	int i,j;
	
	printf("enter elements of ist matrix\n");
	for (i=0; i<m; i++){
		for(j=0; j<n;j++){
			printf("num1[%d][%d] ",i,j);
			scanf("%d", &num1[i][j]);
		}
	}
	
	getch();
	
	printf("enter elements  2st matrix\n");
	for (i=0; i<n; i++){
		for(j=0; j<q;j++){
			printf("num2[%d][%d] ",i,j);
			scanf("%d", &num2[i][j]);
		}
	}
}

void mult (int res[][20],int num1[][20] ,int m , int n, int num2[][20], int q){

	int i,j,k;
	
	for (i=0; i<m; i++){
		for(j=0; j<n;j++){
			res[i][j]=0;
			for(k=0;k<n;k++){
				res[i][j]+=num1[i][k]*num2[k][j];
			}
		}
	}
}

void display(int res[][20], int m, int q){
	
	int i,j;
	
	printf("\tmultiply\n");
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf("%d\t",res[i][j]);
		}
		printf("\n");
	}
}
