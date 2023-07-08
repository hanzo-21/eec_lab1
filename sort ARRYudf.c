// wap to input an array of n elements then sort it  and display using a function 

#include<stdio.h>
#include<conio.h>

void display (int num[], int n );
void sort (int num[], int n);
void input (int num[], int n);	

int main(){
	
	int num[20] ,n;
	
	printf("enter n ");
	scanf("%d", &n);
	
	input(num, n);
	sort(num,n);
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

void sort(int num[], int n){
	
	int i,j,temp;
	
	for (i=0; i<n-1; i++){
		for(j=i+1;j<n;j++){
			
			if (num[i]>num[j]){
				temp= num[i];
				num[i]=num[j];
				num[j]=temp;
			}
			
		}
	}
}

void display(int num[], int n){
	
	int i;
	
	printf("\n sorted\n");
	for(i=0; i<n ; i++)
		printf("\n%d", num[i]);
	
	
}

