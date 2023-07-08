#include"stdio.h"
#include"conio.h"

//#define max(a,b) a>b? a:b

int max(int x, int y){
	return x>y ? x:y;
}

int main(){
	
	int a=5, b=6, result;
	
	result=max(a,b);
	
	printf("%d is greatest", result);
	
	
	getch();
	return 0;
}

