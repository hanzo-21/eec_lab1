//sun and average of 3*3 matinx

#include<stdio.h>
#include<conio.h>

int main(){
	
	int num[3][3], i,j,sum=0;
	
	
	for(i=0;i<3;i++){
		for(j=0; j<3; j++){
			printf("enter element of num[%d][%d] ",i,j);
			scanf("%d",&num[i][j]);
			sum += num[i][j];
		}
	}

	/*
	for(i=0;i<3;i++){
		for(j=0; j<3; j++){
			printf("%d\t", num[i][j]);
		}
		printf("\n");
	}
	*/	
	
	printf("\nsum = %d",sum);
	
	
	getch();
	return 0;
}
