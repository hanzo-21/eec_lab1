//sun and average of m*n matinx

#include<stdio.h>
#include<conio.h>

int main(){
	
	int num[10][10], i,j,sum=0,m,n;
	float avg;
	
	printf("enter number of row (m)");
	scanf("%d", &m);
	printf("enter nuber of column (n) ");
	scanf("%d", &n);
	
	
	
	for(i=0;i<m;i++){
		for(j=0; j<n; j++){
			printf("enter element of num[%d][%d] ",i,j);
			scanf("%d",&num[i][j]);
			sum += num[i][j];
				avg= (float)sum/(m*n);
		}
	}
	
//	avg= (float)sum/(m*n);
	
	printf("\n\n\n");
	
	for(i=0;i<m;i++){
		for(j=0; j<n; j++){
			printf("%d\t", num[i][j]);
		}
		printf("\n");
	}
	
	
	
	printf("\n\n\n sum = %d\naverage= %.2f",sum,avg);
	
	
	getch();
	return 0;
}
