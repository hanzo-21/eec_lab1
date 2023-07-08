// wap to copy one array to another array using fucntion;

#include<stdio.h>
#include<conio.h>

void display (int [], int n );
void copy( int cpy[], int num[], int n);
void input (int num[], int n);	

int main(){
	
	int num[20] , cpy[20],n;
	
	printf("enter n ");
	scanf("%d", &n);
	
	input(num, n);
	copy(cpy,num,n);
	display(cpy,n);
	
	getch();
	return 0;
}


void input(int num[], int n){
	
	int i;
	
	printf("enter %d numbers\n",n);
	for (i=0 ; i<n ; i++){
		scanf("%d", &num[i]);
	}
	
}

void copy( int cpy[], int num[], int n){
	
	int i; 
	for (i=0;i<n;i++)
		cpy[i]=num[i];
}

void display(int cpy[], int n){
	
	int i;
	
	printf("\ncopied ");
	for(i=0; i<n ; i++)
		printf("\n%d", cpy[i]);
	
	
}

