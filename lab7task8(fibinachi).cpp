//8. WAP to generate the Fibonacci series upto nth term.
//  1, 1, 2, 3, 5, 8, 13, 21, 34
//-aayush rana magar

#include <stdio.h>
#include <conio.h>

int main(){
	
	int a=1,b=0,num,c=0,n;
	printf("enter number of term ");
	scanf("%d",&num);
	
	for(n=1;n<=num;n++){
		
	//	printf("\n%d ,\t%d,\t%d,\t%d",n,a,b,c);   //table
	//	printf("\nn%d= %d",n,a);					//actual output
		c=b;
		b=a;
		a=b+c;
			
	}
	getch();
	return 0;
}
