// greatest amonung 3 number bu udf


#include<stdio.h>
#include<conio.h>

int great(int,int,int);

int main(){
	
	int a,b,c;
	
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	printf("enter c");
	scanf("%d",&c);
	
	
	
	
	
	switch (great(a,b,c)){
	
	
		case 1:
			printf("%d is greatest ", a);
			break;
			
		case 2:
			printf("%d is greatest ", b);
			break;
			
		case 3:
			printf("%d is greatest",c);
			break;
			
			
		default:
			printf("all are equal ");
			break;
	}
	
	
	
	
	
	
	
	getch();
	return 0;
}

int great(int x,int y,int z){

	int n;
	
	if (x>y && x>z)
		n=1;
	else if (y>x && y>z)
		n=2;
	else if (z>x && z>y)
		n=3;
		
	return n;
	
}









