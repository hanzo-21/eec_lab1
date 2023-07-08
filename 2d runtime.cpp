//2d array runtime time

/* 
11	12	13
21	22	23
31	32	33
*/


#include <conio.h>
#include <stdio.h>

int main(){
	
	int i,j,set[10][10],n,m;
	
	printf("enter number of rows(n)");
	scanf("%d",&n);
	printf("enter number of column (m)");
	scanf("%d",&m);
	
	
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			printf (" enter value of pos (i=%d,j=%d)= ",i,j);
			scanf("%d",&set[i][j]);
			printf("\n");	
		}
	}
	printf("\n\n");
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			printf ("pos (i=%d,j=%d)\t",i,j);
		}
		printf("\n");
		for(j=0;j<m;j++){
			printf("%d\t\t",set[i][j]);
		}
		printf("\n\n\n");
	}
	
	getch();
	return 0;
}
