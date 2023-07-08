/*5. WAP to input two array of length 5 and find the similar numbers among two array and 
display it else display “no similarities” if no any similarity found.
Eg:- num1[5]={1,2,3,4,5} and num2[5]={3,4,5,7,8}
Similar number:- 3 4 5
aayush rana magar
*/


#include <stdio.h>
#include <conio.h>

int main(){
	
	int i,j,k=0,num1[5],num2[5],sim[5];
	
	printf("enter number of 1st array (num1)\n");
	for(i=0;i<5;i++)
		scanf("%d", &num1[i]);
	
	printf("enter number of 2nd array (num2)\n");
	for(i=0;i<5;i++)
		scanf("%d", &num2[i]);
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if (num1[i]==num2[j]){
				sim[k]=num1[i];
				++k;
			}
		}
	}
	
	if (k==0){
		printf("\nno similarities");
	}
	else{
		printf("\nsimilar numbers are\n");
		for(i=0;i<k;i++)
			printf("%d\n", sim[i]);
	}
	
	

	
	
	getch();
	return 0;
}
