//6. WAP to check if a given number is Armstrong or not.
//-aayush rana magar 

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (){
	
	int num,i,sum=0,qut=0;
	
	printf("enter a number ");
	scanf("%d",&num);
	i=num;
	while (num!=0){
		qut=num%10;
		sum=sum+pow(qut,3);
		num=num/10;
	}
	printf("sum= %d\n",sum);
	if (i==sum){
		printf("%d number is Armstrong",i);
	}
	else{
		printf("%d number is not Armstrong",i);
	}

	getch();
	return 0;
}
