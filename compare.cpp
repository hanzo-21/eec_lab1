//3. WAP to check if a number is greater than 10 
#include<stdio.h>
#include<conio.h>
int main(){
	int num,bum,cum;
	
	printf("Enter a number :\t");
	scanf("%d",&num);
	printf("Enter a number :\t");
	scanf("%d",&bum);
	printf("Enter a number :\t");
	scanf("%d",&cum);
	
	if(num>bum || num>cum){
		printf("%d is greater ",num);						// || is used as or sign 
	}
	else if(bum>num || bum>cum){ //false
		printf("%d is greater",bum);
	}
	else{
		printf("%d is greater ",cum);		
	}
	getch();
	return 0;	
}
