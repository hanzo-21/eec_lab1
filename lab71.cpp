// sum of anti diognal

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
		}
	}

	
	for(i=0;i<m;i++){
		j=2-i;
		sum += num[i][j];
	}
	
	printf("\n\n\n");

	for(i=0;i<m;i++){
		for(j=0; j<n; j++){
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}	
	
	printf("\n\n\n sum = %d",sum);
	
	
	getch();
	return 0;
}
