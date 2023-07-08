// of 3*4 matinx count + _ 0
#include<stdio.h>
#include<conio.h>

int main(){
	
	int num[3][4], i,j,CountPos=0,CountNeg=0,Count0=0;
	
	
	for(i=0;i<3;i++){
		for(j=0; j<4; j++){
			printf("enter element of num[%d][%d] ",i,j);
			scanf("%d",&num[i][j]);
			if(num[i][j]>0)
				CountPos++;
			else if (num[i][j]<0)
				CountNeg++;
			else 
				Count0++;
		}
	}


/*
	for(i=0;i<3;i++){
		for(j=0; j<3; j++){
			printf("%d\t", num[i][j]);
		}
		printf("\n");
	}
	*/
	printf("\npositive number= %d\nnegitive number=%d\nzero number=%d",CountPos,CountNeg,Count0);
	
	
	getch();
	return 0;
}
