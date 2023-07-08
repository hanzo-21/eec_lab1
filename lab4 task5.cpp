//wap of your own which represent inplicit type conversion as well as explicite type conversion 
//difference between engineer and physicist and mathamatician
//-aayush rana magar
#include<stdio.h>
#include<conio.h>
int main(){
	
	//variabe decleration 
	double num, pi;
	float num1;
	int num2;
	//varable initilization
	pi=3.141592653589793 ;
	printf("\" hey what's the value of pi?\"\n\n");
	
	//for mathamatician
	num=pi;
	printf("Archimedes: value of pi is %0.15lf",num);
	
	//for physicist  
	num1= (float)pi;							//explicit conversion 
	printf("\n\nEinstein: for me it's %f",num1);

	//for engineer 
	num2=pi;									//imlicit  conversion 
	printf("\n\nSmeaton:its about %d but i would write %d. just to be safe.",num2,num2+1);
	
	getch();
	return 0;
}
