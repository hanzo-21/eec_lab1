//cos(x)= 1-x^2/2!+x^4/4!-x^6/6!.....

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define pi 3.1416

int main(){
	
	int i,n,sign=1,fact=1;
	float sum,x;
	for(;;){
	
	printf("enter x of cos(x) ");
	scanf("%f",&x);
	
	printf("enter value of n ");
	scanf("%d",&n);
	
	x=x*pi/180;
	sum=1;
	printf("x in radian =%f",x);
	
	for(i=2;i<=n;i+=2){
		printf("\nwhen i=%d\n",i);
		fact=fact*i*(i-1);
		printf("fact of %d!= %d \nsum=%f\n",i,fact,sum);
		
		sum=sum+(-1*sign)*pow(x,i)/(float)fact;
		//sign=-1*sign;
	}
	
	printf("\nsum= %.3f",sum);
printf("\n\n");	
fact=1;
}
	getch();
	return 0;
}
