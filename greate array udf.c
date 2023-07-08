// wap to input n elements  and find the maximum number in that array using function

#include<stdio.h>
#include<conio.h>

int max(int []);

int main (){
	int n,i,num[20];
	printf("enter number of elements ");
	scanf("%d",&n);
	printf("enter %d numbers\n",n);
	for(i=0; i<n; i++)
		scanf("%d", &num[i]);
		
		
	printf("maximum number is %d ", max(num));
	
	
	getch();
	return 0;
}

int max(int num[]){
	int i, big;
	
	big=num[0];
	for (i=1;num[i]!='\0'; i++){
		
		if (num[i]>big)
			big=num[i];
	}
	
	return big;
}
	
