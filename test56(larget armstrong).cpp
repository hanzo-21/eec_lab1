#include<stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	
	unsigned long long int num,check,rem,sum=0,n=0;
	printf("enter number= ");
	scanf("%llu",&num);
	check=num;
	//115132219018763992565095597973971522400
	//data over flow
	
	
	
	while(num!=0){
		num=num/10;
		n++;
	}
	
	num=check;
	
	while(num!=0){
		rem=num%10;
		sum=sum+pow(rem,n);
		num=num/10;
	}
	if(sum==check){
		printf("armstrong");
	}
	else{
		printf("not armstrong");
	}
	
	getch();
	return 0;
}
