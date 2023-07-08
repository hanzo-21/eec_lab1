//sum of each row of3*3 matrix

#include<stdio.h>
#include<conio.h>

int main(){
	
	int num[3][3], i,j, sum=0;
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter element of num[%d][%d] ",i,j);
			scanf("%d",&num[i][j]);
		}
	}

	printf("\n");
	/*
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}	
*/
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum+=num[i][j];
		}
		printf("\nsum of %d row = %d", i+1,sum);
		sum=0;
	}
	

	
	getch();
	return 0;
}
