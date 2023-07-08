//arae of reactangel and square

#include<stdio.h>
#include<conio.h>

int rec(int,int);
int sqr(int);

int main(){
	
	int l,b,s;
	
	printf("for retnagel \n enter lenght and breath\n");
	scanf("%d%d",&l,&b);
	
	
	
	printf("for square\n enter length\n");
	scanf("%d",&s);
	
	printf("area of rectangle %d \n area of square %d ", rec(l,b),sqr(s));
	
	
	getch();
	return 0;
}

int rec(int x,int y){
	return x*y;
}

int sqr(int x){
	return x*x;
}



