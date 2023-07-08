#include<stdio.h>
#include<conio.h>
#define tax 0.3
int main(){
	
	float pro,total;
	
	printf("Enter the price of the product \t");
	scanf("%f",&pro);
	
	total=pro+pro*tax;
	printf("\n\nThe price of the product after 30 %c tax  = %.2f",37,total);
	getch();
	
	return 0;
}
