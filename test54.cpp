#include <stdio.h>
#include <conio.h>

int main(){
	
	int num[10],i, n,x;
	
	printf("enter number n");
	scanf("%d",&n);
	printf("\nenter multiplier (x)");
	scanf("%d",&x);
	
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	printf("updated array");
	for(i=0;i<n;i++){
		num[i]=num[i]*x;
		printf("\n%d",num[i]);
	}
	
	getch();
	return 0;	
}
