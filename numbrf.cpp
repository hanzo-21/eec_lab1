//WAP to find the sum of n natural numbers using pointer
#include<stdio.h>
#include<conio.h>

int main(){
	int *ptr,n,i,sum=0;
	ptr=&sum;
	printf("Enter the number of elements you want:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		*ptr+=i;
	}
	
	printf("Sum=%d",*ptr);
	getch();
	return 0;
}
