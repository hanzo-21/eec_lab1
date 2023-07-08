#include <stdio.h>
#include <conio.h>

int main(){
	
	int set[3][3],i,j,n;

	printf("enter number nultiply (n) ");
	scanf("%d", &n);
	
		
	for(i=0; i<3; i++){
		for(j=0; j<3 ; j++){
			printf("enter the elemients of num[%d][%d] ",i,j);
			scanf("%d",&set[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<3 ; j++){
			printf("%d\t", set[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0; i<3; i++){
		for(j=0; j<3 ; j++){
			set[i][j]=  n * set[i][j];
		}
	}
	printf("\n\n\n");
	for(i=0; i<3; i++){
		for(j=0; j<3 ; j++){
			printf("%d\t", set[i][j]);
		}
		printf("\n");
	}
	
	
	getch();
	return 0;
}
