//wap to iniput n number and find sum of odd using pointer

#include<stdio.h>
#include<conio.h>

int main(){
	
	int arr[20],n,sum=0,i;
	int *ptr;
	ptr=arr;
	
	//input 
	printf("enter n ");
	scanf("%d", &n);
	printf("enter %d number s\n",n);
	for(i=0;i<n;i++){
		scanf("%d", ptr+i );
	}
	
	// check if odd and if yes sum it self
	for(i=0;i<n;i++){
		
		if (*(ptr+i)%2!=0)
			sum+=*(ptr+i);
	}
	
	//display sum of odd numbers
	printf("sum of odd nnumbers= %d ",sum);
	
	getch();
	return 0;
}
