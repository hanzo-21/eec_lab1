//7. WAP to check if a given number is prime or not.
//-aayush rana magar

#include <stdio.h>
#include <conio.h>

int main (){
	
	int i,num, mod;



	printf("enter a number ");
	scanf("%d",&num);
	
	if(num==1){
		printf("%d is not a prime number",num);
		goto end;
	}


	for(i=2;num>i;i++){
		
		mod= num%i;
		
		if (mod==0){
			printf("%d is not a prime number",num);
			goto end;
		}
	}
	
	printf("%d is a prime number",num);
	
	end:

	
	
	

	getch();
	return 0;
}
