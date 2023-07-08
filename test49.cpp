#include<stdio.h>
#include<conio.h>

int main (){
	
	int i,mar[7],sum=0;
	
	for(i=0;i<7;i++){
		printf("sub %d ",i);
		scanf("%d",&mar[i]);
		sum=sum+mar[i];
	}
	printf("total: %d",sum);
	
	
	getch();
	return 0;
}
