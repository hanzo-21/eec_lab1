//sum of column of the users choice of m*n matrix

#include<stdio.h>
#include<conio.h>

int main(){
	
	int num[10][10], i,j,m,n,col, sum=0;
	
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
	
	printf("\n\nenter column to be summed ");
	scanf("%d",&col);
	col--; //as 1st column is 0 index value

	printf("\n\n\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}	
	
	if(col<=n){
		
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(col==j)
					sum+=num[i][j];
			}
		}	
		
		/*
		for(i=0;i<m;i++){
			sum += num[i][col];
		}
		*/
		
		printf("\n\nsum of %d column = %d",++col ,sum);
	}
	else{
		printf(" \nrow do not exist ");
	}
	
	
	getch();
	return 0;
}
