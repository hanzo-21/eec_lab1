#include<stdio.h>
#include<conio.h>

int num(int);

int main(){
	int n;
	printf("enter n ");
	scanf("%d",&n);
	n= num(n);
	printf(" %d ",n);
	
	getch();
	return 0;
}

int num(int x){
	
	if (x==1)
		return 1;
	else
		return x*num(x-1); 
	
}

