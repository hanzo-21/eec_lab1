//wap to take radius as input and find the are of cirlce and you must use constat variable for pi
//-aayush rana magar 
#include<stdio.h>
#include<conio.h>

int main(){
	
	//variable decleration 
	const float pi=3.1416; 				//constant variable 
	float area, rad;
	
	//taking raduis 
	printf("enter radius=");
	scanf("%f",&rad);
	
	//calcultaing 
	area=pi*rad*rad;
	
	//display result
	printf ("area of circle=%.2f",area);
	
	getch();
	return 0;
}
// write conclusion 

