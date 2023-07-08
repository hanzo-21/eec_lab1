// sum of anti diognal

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int num[10][10], i,j,sum=0,m,n;
	
	printf("enter number of row (m)");
	scanf("%d", &m);
	printf("enter nuber of column (n) ");
	scanf("%d", &n);
	
	if (m!=n){
		printf("digonal donnot exist");
		exit (0);
	}
	
	for(i=0;i<m;i++){
		for(j=0; j<n; j++){
			printf("enter element of num[%d][%d] ",i,j);
			scanf("%d",&num[i][j]);
		}
	}

	
	for(i=0;i<m;i++){
		sum += num[i][i];
	}
/*	
	printf("\n\n\n");

	for(i=0;i<m;i++){
		for(j=0; j<n; j++){
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}	
*/	
	printf("\nsum of diognal = %d",sum);
	
	
	getch();
	return 0;
}
