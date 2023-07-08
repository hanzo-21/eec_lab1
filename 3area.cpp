#include<stdio.h>
#include<conio.h>

int main(){
	float len1,len2,len3,bre1,bre2,bre3;
	
	printf("Enter lenght of 1st rectangel \t");
	scanf("%f", &len1);
	printf("\nEnter breth of 1st rectangel \t");
	scanf("%f", &bre1);
	
	printf("\nEnter lenght of 2nd rectangel \t");
	scanf("%f", &len2);
	printf("\nEnter breth of 2nd rectangel \t");
	scanf("%f", &bre2);
	
	printf("\nEnter lenght of 3rd rectangel \t");
	scanf("%f", &len3);
	printf("\nEnter breth of 3rd rectangel \t");
	scanf("%f", &bre3);
	
	printf("\n Area of 1st rectangel is %.2f sqr unit. \n Area of 2nd rectangel is %.2f sqr unit.\n Area of 3rd rectangel is %.2f sqr unit. ",len1*bre1,len2*bre2,len3*bre3);
	getch();
	return 0;
}

