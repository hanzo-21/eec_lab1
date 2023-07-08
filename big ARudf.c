// wap to input n elements and find the maximum number in that array using function 

#include<stdio.h>
#include<conio.h>

void display (int n );
int max(int num[], int n);
void input (int num[], int n);	

int main(){
	
	int num[20] ,n;
	
	printf("enter n ");
	scanf("%d", &n);
	
	input(num, n);
	display( max(num,n));
	
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

int max(int num[], int n){
	
	int i, big;
	big= num[0];
	
	for (i=1; i<n; i++){
		if ( num[i]>big)
			big=num[i];	
	}
	return big;
}

void display(int n){	
	printf("biggest number = %d ", n);

}

