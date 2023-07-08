//6. WAP to find the compound interest for a given principle,time(in years)and rate. 
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	float p,r,t,i;
	
	printf("principle\t");
	scanf("%f",&p);
	printf("time in year\t");
	scanf("%f",&t);
	printf("rate\t\t");
	scanf("%f",&r);
	
	i=p*(pow(1+r/100,t)-1);
	printf("compound intrest =%.4f", i);
	getch();
	return 0;
	
}
