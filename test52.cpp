#include<stdio.h>
#include <conio.h>
int main(){
	
	int num[5],dub[5],i,n,m;
	
	
	printf("enter n ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	m=n;
	
	for(i=0;n>i;n--){
		dub[m-n]=num[n-1];
	}
	printf("dub == num");
	for(i=0;i<m;i++){
		printf("\n%d == %d",dub[i],num[i]);
	}
	
	
	getch();
	return 0;
}
