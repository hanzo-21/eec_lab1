//sun and average of 3*3 matinx

#include<stdio.h>
#include<conio.h>

int main(){
	
	int num[3][3], i,j,mod,CountOdd=0,CountEve=0;
	
	
	for(i=0;i<3;i++){
		for(j=0; j<3; j++){
			printf("enter element of num[%d][%d] ",i,j);
			scanf("%d",&num[i][j]);
			mod=num[i][j]%2;
			if(mod==0)
				CountEve++;
			else
				CountOdd++;
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
	
	printf("\nodd number= %d\neven number=%d",CountOdd,CountEve);
	
	
	getch();
	return 0;
}
