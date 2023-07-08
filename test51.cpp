#include <stdio.h>
#include <conio.h>

int main(){
	
	int num[5]={1,2,3,4,5},dub[5],i,n;
	
/*	
	printf("enter n ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		dub[i]=num[i];
	}
	
	printf("num == dub");
	
	for(i=0;i<n;i++){
		printf("\n%d == %d ",num[i],dub[i]);
	}
	
*/
	
	
	
	printf("num == dub");
	for(i=0;i<5;i++){
		dub[i]=num[i];
		printf("\n%d == %d",num[i],dub[i]);
	}
	
	
	
	getch();
	return 0;
}
