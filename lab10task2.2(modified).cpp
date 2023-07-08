/* modified version of lab10 task 2

WAP to input two array of length n and p, then merge them into another array and finally 
display it.
Eg:- num1[n]={1,2,3,4,5....} and num2[p]={6,7,8,9,10....}
 num3[n+p]={1,2,3,4,5,.....,6,7,8,9,10.....}

aayush rana magar*/

#include <stdio.h>
#include <conio.h>

int main(){
	
	int num1[20], num2[20], num3[40],i,j,n,m;
	
	printf("enter number of elements for 1st set (n) ");
	scanf("%d", &n);							//get 1st sets of numbers
	printf("enter numbers \n");
	
	for(i=0;i<n;i++)
		scanf("%d",&num1[i]);


	printf("enter number of elements for 2nd set (p) ");
	scanf("%d", &m);							//get 2nd set of numbers
	printf("enter numbers \n");
	
	for(i=0 ; i<m ; i++)
		scanf("%d",&num2[i]);
	
	j=n+m;
		
	for(i=0;i<j;i++){
		if(i<n){
			num3[i]=num1[i];
		}
		else{
			num3[i]=num2[i-n];
		}
	}
	
	printf("combined set\n");
	for(i=0;i<j;i++)
		printf("%d\n", num3[i]);

	
	getch();
	return 0;
}
