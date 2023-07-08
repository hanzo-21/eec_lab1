// wap to input an array of n elements then sort it  and display using a function 

#include<stdio.h>
#include<conio.h>

void prime (int num[], int n);
void input (int num[], int n);	
void display (int,int);

int main(){
	
	int num[20] ,n;
	
	printf("enter n ");
	scanf("%d", &n);
	
	input(num, n);
	printf("\n prime numbers are ");
	prime(num,n);
	
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

void prime(int num[], int n){
	
	int i,j,temp;
	
	for (i=0; i<n; i++){
		temp=1;
		
		if ( num[i]==0 || num[i]==1)
			temp=0;
			
		else{
			
			for(j=2;j<=num[i]/2;j++){
				
				if (num[i]%j==0){
					temp=0; 
					break;	
				}			
			}
		}
		
		display(num[i],temp);
		
	}
}

void display(int prm ,int temp){
	
	if (temp==1)
		printf("\n%d",prm);
	
}

