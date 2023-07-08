/* 3. WAP to input n numbers in an array and find the sum of all even numbers and odd 
numbers and count their numbers and display them.
aayush rana magar*/

#include <stdio.h>
#include<conio.h>

int main(){
	int n,i,oddCount=0,mod,oddSum=0,eveCount=0,eveSum=0,set[20];
	printf("enter number of terms (n) ");
	scanf("%d",&n);
	printf("enter %d numbers now\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&set[i]);
		mod=set[i]%2;
		
		if(mod==0){
			eveSum+=set[i];
			eveCount++;
		}
		else{
			oddSum+=set[i];
			oddCount++;
		}
	}
	printf("\n\nnumber of odds = \t%d \n sum of odd number = \t%d ",oddCount,oddSum);
	printf("\nnumber of evens = \t%d \n sum of even number = \t%d",eveCount,eveSum);
	getch();
	return 0;
}
