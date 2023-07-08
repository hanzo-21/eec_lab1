/*wap to ask the user to take one integer number and one floting number and as input and add them and and subtract them 
with 1000 then finally multiply the result by 3 and disply the final result.
-aayush rana magar*/
#include<stdio.h>
#include<conio.h>

int main(){
	
	//declaing variables
	int num1;
	float num2, res;
	
	// input one intiger and one float	
	printf("enter integer=");
	scanf("%d",&num1);
	
	printf("enter float =");
	scanf("%f",&num2);
	
	//calclulating
	res= ((num1+num2)-1000)*3;
	
	//display 
	printf("the final result:%.2f",res);
	
	getch();
	return 0;
		
}
