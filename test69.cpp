// add matix


#include<stdio.h>
#include<conio.h>

int main(){
	
	int num[10][10],set[10][10],i,j,sum[10][10],m,n;
	float avg;
	
	printf("enter number of row (m)");
	scanf("%d", &m);
	printf("enter nuber of column (n) ");
	scanf("%d", &n);
	
	
	printf("enter number of 1st set\n");
	for(i=0;i<m;i++){
		for(j=0; j<n; j++){
			printf("enter element of num[%d][%d] ",i,j);
			scanf("%d",&num[i][j]);
			
		}
	}

printf("enter number of 2nd set\n");
	for(i=0;i<m;i++){
		for(j=0; j<n; j++){
			printf("enter element of set[%d][%d] ",i,j);
			scanf("%d",&set[i][j]);
			
		}
	}	
	
	for(i=0;i<m;i++){
		for(j=0; j<n; j++){
			sum[i][j]=num[i][j]+set[i][j];
		}
	}	
	
	printf("\n\n\n");
	
	for(i=0;i<m;i++){
		for(j=0; j<n; j++){
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	getch();
	return 0;
}
