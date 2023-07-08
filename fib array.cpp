//fibinichi series using array

#include <stdio.h>
#include <conio.h>

int main(){
	
	int fib[100],i;
	
	fib[0]=0;
	fib[1]=1;
	
	for(i=2;i<47;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	for(i=0;i<47;i++){
		printf("%d\n",fib[i]);
	}
	getch();
	return 0;
}
