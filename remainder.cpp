#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,remainder;
	
	printf("enter num1 and num2 ;");
	scanf("%d%d",&num1,&num2);
	
	remainder= num1%num2;
	
	printf("reminder=%d",remainder);
	 
	 getch();
	 return 0;
	 
}
