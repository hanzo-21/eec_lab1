//sum of each column of  of m*n matrix

#include<stdio.h>
#include<conio.h>

int main(){
	
	int num[10][10], i,j,m,n, sum=0;
	
	printf("enter row (m) ");
	scanf("%d",&m);
	printf("enter column (n) ");
	scanf("%d",&n);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter element of num[%d][%d] ",i,j);
			scanf("%d",&num[i][j]);
		}
	}
	

	printf("\n\n\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}	
	
	
		
	for(j=0;j<n;j++){
		for(i=0;i<m;i++){
			sum+=num[i][j];
		}
												//++j was not used as it changes it value permantely	
		printf("sum of %d column is  = %d\n",j+1,sum);
		sum=0;
	}	
		
	

	
	
	getch();
	return 0;
}
