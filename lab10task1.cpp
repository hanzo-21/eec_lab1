/*1. WAP to input n elements in an array and replace all odd numbers with 0 and even 
numbers with 1 in that array and display it.
aayush rana magar*/

#include <stdio.h>
#include <conio.h>

int main(){
	
	int box[20],i,n,mod;
	
	printf("enter number of elements (n) ");
	scanf("%d", &n);
	printf("enter numbers now\n");
	
	for(i=0;i<n;i++){
		scanf("%d", &box[i]);
	}
	
	for(i=0;i<n;i++){
		mod=box[i]%2;
		
		if(mod==0){//even
			box[i]=1;			
		}
		else{//odd
			box[i]=0;
		}
	}
	
	printf("\ndisplay odd or even\n");
	for(i=0;i<n;i++){
		printf("%d\n",box[i]);
	}
	
	getch();
	return 0;
}
