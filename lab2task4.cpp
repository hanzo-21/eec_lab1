//4. WAP to take radian as input and convert into degree. 
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.1416

int main(){
	float deg, rad;
	
	printf("enter angele in radien.\t");
	scanf("%f",&rad);
	deg= rad*180/pi;
	printf("angele in degree is %.2f.", deg);
	getch();
	return 0;
	
}
