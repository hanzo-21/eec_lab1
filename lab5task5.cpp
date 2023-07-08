/*WAP to check if a number is greater than or equal to -50 and less than 300
 if its true print “valid” else print “invalid”. 
-aaysuh rana magar*/

#include <stdio.h>
#include <conio.h>

int main(){
	
	int a ;
	
	printf("enter a number \t");
	scanf("%d",&a);
	
	if(a>=-50 && a<300 ){
		printf("valid");
	}
	else{
		printf("invalid"); 
	}
	
	getch();
	return 0;
	
}
