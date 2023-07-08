// tranpose matrinx

#include <stdio.h>
#include <conio.h>

int main(){
	
	int num[10][10],tra[10][10],i,j,k,m,n;
	
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
		for(j=0; j<n; j++){
			tra[j][i]=num[i][j];
		}
	}	
	
	for(i=0;i<m;i++){
		for(j=0; j<n; j++){
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}	
	
	printf("\n\n\n");
	
	for(i=0;i<m;i++){
		for(j=0; j<n; j++){
		printf("%d\t",tra[i][j]);
		}
		printf("\n");
	}	

	
	getch();
	return 0;
}
