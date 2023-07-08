//wap to input a matrix of size of 3x3 and count the total odd and even number in the matrix using function

#include<stdio.h>
#include<conio.h>

void input (int num[][3]);
void count (int num[][3]);
void display(int,int );


int main(){
	
	int num[3][3];
	
	input (num);
	count(num);
	
	getch();
	return 0;
}

void input(int num[][3]){
	
	int i,j;
	
	printf("enter element of \n");
	for (i=0; i<3; i++){
		for(j=0; j<3;j++){
			printf(" num[%d][%d] ",i,j);
			scanf("%d", &num[i][j]);
		}
	}
}

void count(int num[][3]){
	
	int i,j,eve=0,odd=0;
	for (i=0; i<3; i++){
		for(j=0; j<3;j++){
			if (num[i][j]==0){
				
			}
			else if (num[i][j]%2==0)
				eve++;
			else{
				odd++;
			}
		}
	}
	display(eve,odd);
}

void display(int eve, int odd){
	
	printf("even = %d\nodd = %d", eve, odd);
}
