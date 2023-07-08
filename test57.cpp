#include <stdio.h>
#include <conio.h>
#include <unistd.h>

int main(){
	
	int n,i,j,k,num[50][50];
	
	printf("enter (n)");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
				scanf("%d",&num[i][j]);
		}
	}

	printf("\n\n \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
	

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
				printf("%d\n",2*num[i][j]);
		}
	}
	
	sleep(20);
	getch();
	return 0;
}
