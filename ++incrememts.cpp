#include <stdio.h>
#include<conio.h>

int main(){
	
	int num=1; 
	int a,b,c,d;
	
	a=++num + ++num;
		printf("%d %d",a,num);
	
	
	b=num++ + num++;
		printf("%d %d",b,num);

	
	c=++num + num++;
		printf("%d %d",c,num);

	
	d=num++ + ++num;
		printf("%d %d",d,num);

	
	
	getch();
	return 0;
		
}
