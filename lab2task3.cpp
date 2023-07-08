//3. WAP to take angle as input in degree and convert into radian. 
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.1416

int main(){
	float deg, rad;
	
	printf("degree");
	scanf("%f",&deg);
	rad= deg*pi/180;
	printf("result %.2f", rad);
	getch();
	return 0;
	
}
