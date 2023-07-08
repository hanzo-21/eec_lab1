//5. WAP to convert the cartisian coordinates to polar coordinates. 
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.1416
int main(){
	int x,y;
	float r, O,deg;
		
	printf("enter Cartisian Coordinates (x,y)\n");
	scanf("%d%d",&x,&y);
	r=sqrt(pow(x,2)+pow(y,2));
	O=atan(y/x);
	deg= O*180/pi;
	printf("Polar Coordinates (%.2f,%.2f)",r,deg);
	getch();
	return 0;
	
}
