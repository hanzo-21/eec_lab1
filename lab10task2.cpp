/*WAP to input two array of length 5, then merge them into another array and finally 
display it.
Eg:- num1[5]={1,2,3,4,5} and num2[5]={6,7,8,9,10}
 num3[10]={1,2,3,4,5,6,7,8,9,10}
aayush rana magar*/

#include <stdio.h>
#include <conio.h>

int main(){
	
	int num1[5],num2[5],num3[10],i;
	
	printf("enter number of 1st array (num1)\n");
	for(i=0;i<5;i++)
		scanf("%d", &num1[i]);
	
	printf("enter number of 2nd array (num2)\n");
	for(i=0;i<5;i++)
		scanf("%d", &num2[i]);
	
	for (i=0;i<10;i++){
		
		if(i<5){
			num3[i]=num1[i];
		}
		else{
			num3[i]=num2[i-5];
		}
		
	}
	
	printf("combine array is\n");
	for(i=0;i<10;i++){
		printf("%d\n", num3[i]);
	}
	
	
	getch();
	return 0;
}
