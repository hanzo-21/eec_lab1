#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	char name[20];
	int math, opt_math,sum;
	float percent;
	
	printf("Enter the name of the student\t");
	scanf("%s",name);
	printf("full mark for each subject is 100");
	printf("enter marks obtain in \n math\t ");
	scanf("%d",&math);
	
	printf("opt_math\t");
	scanf("%d",&opt_math);
	

	sum=math + opt_math ;
	percent= sum/2;
	
	printf(" master %s has recived %.2f",name,percent,"%");
	getch();
}
