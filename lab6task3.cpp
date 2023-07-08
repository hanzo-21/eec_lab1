//3. WAP to check the given 3-digit number is Armstrong or not.
//-aayush rana magar

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	int num,a,b,c,amr;
	printf("enter a 3 didgit number ");
	scanf("%d",&num);
	a=num%10;	
	b=(num/10)%10;	
	c=num/100;
	amr=pow(a,3)+pow(b,3)+pow(c,3);	
	if (num==amr){
		printf("%d is an Armstrong number",num);
	}
	else{
		printf("%d is not an Armstrong number",num);
	}
	getch();
	return 0;
}

