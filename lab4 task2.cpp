//wap to take radius as input and find the circumference of the circle and you must use symbolic contant for pi
//-aayush rana magar 
#include<stdio.h>
#include<conio.h>
#define pi 3.1416					//symbolic constant

int main(){
	
		//variable decleration 
	float cir, rad;
	
		//taking raduis 
	printf("enter radius=");
	scanf("%f",&rad);
	
		//calcultaing 
	cir=pi*rad*2;
	
		//display result
	printf (" circumference of the circle=%.2f",cir);
	

	getch();
	return 0;
	
}
