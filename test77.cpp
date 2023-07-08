//sum of each column of2*3 matrix

#include<stdio.h>
#include<conio.h>

int main(){
	
	int num[2][3], i,j, sum[3];
	
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("enter element of num[%d][%d] ",i,j);
			scanf("%d",&num[i][j]);
		}
	}

	printf("\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}	
	
	
	for(j=0;j<3;j++){
		sum[j]=0;
		for(i=0;i<2;i++){
			sum[j]+=num[i][j];
		}
	}
	
	for(j=0;j<3;j++)
		printf("\nsum of column no %d is  %d",j+1,sum[j]);
	

	
	getch();
	return 0;
}
