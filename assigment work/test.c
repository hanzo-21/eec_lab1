//this is a practice for armstrong number

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int n,i,a,b,c=0;
	
	for(;;){
		system("cls");
		printf("enter a number ");
		scanf("%d", &n);
		a=n;
		for(;a!=0;){
			b=a % 10;
			c=c*10 +b;
			a=a/10;
		}
		
		if (n==c){
			printf("%d is palendrom ",n);
		}
		else 
			printf("%d ins not palandrom",n);
		
		getch();

	}
	
	
	
	getch();
	return 0;
}
