#include <stdio.h>
#include<conio.h>

int main(){
	
	int num=1; 
	int a,b=0,c,d;
	
	
	b= num++ + ++num;
	
	printf("%d \n%d",b,num);
	
/*	
	a=++num + ++num;
		printf("%d %d\n",a,num);
	
	
	b=num++ + num++;
		printf("%d %d\n",b,num);

	
	c=++num + num++;
		printf("%d %d\n",c,num);

	
	d=num++ + ++num;
		printf("%d %d\n",d,num);

*/	
	
	getch();
	return 0;
		
}
