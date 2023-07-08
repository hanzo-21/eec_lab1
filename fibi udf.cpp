// fibinachi seirse till nth  when intial value is given by user
#include<stdio.h>
#include<conio.h>

void fibi(int, int);

int main(){
	
	int n, m ;
	printf("enter number of terms (n)");
	scanf("%d",&n);
	printf("enter  initial value  (m) ");
	scanf("%d",&m);
	fibi(n,m);

	getch();
	return 0;
	
}

void fibi(int x, int a){
	int i,b,c;
	b=a+1;
	c=b;
	
	for (i=0; i<=x ; i++){
		printf("%d\n",a);
		a=b;
		b=c;
		c=a+b;
		
	}	
	
}

