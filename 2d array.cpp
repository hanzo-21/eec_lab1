//2d array compile time

/* 
11	12	13
21	22	23
31	32	33
*/


#include <conio.h>
#include <stdio.h>

int main(){
	
	int i,j,set[3][3]={{11,12,13},{21,22,23},{31,32,33}};
	
	for(i=0;i<3;i++){
		
			for(j=0;j<3;j++){
			printf ("pos (i=%d,j=%d)\t",i,j);
		}
		printf("\n");
		for(j=0;j<3;j++){
			printf("%d\t\t",set[i][j]);
		}
		printf("\n\n\n");
	}
	
	getch();
	return 0;
}
