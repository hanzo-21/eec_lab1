//of 2*3 matinx sum each row

#include<stdio.h>
#include<conio.h>

int main(){
	
	int num[2][3], i,j,sum;
	
	
	for(i=0;i<2;i++){
		for(j=0; j<3; j++){
			printf("enter element of num[%d][%d] ",i,j);
			scanf("%d",&num[i][j]);
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
	
	for(j=0;j<3;j++){
		sum=0;
		for(i=0; i<2; i++){
			sum+=num[i][j];
		}
		printf("\nsum of col number %d= %d",j+1,sum);
	}


	
	
	getch();
	return 0;
}
