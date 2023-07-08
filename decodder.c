// the logi here is imma make code for all possbel characters for all the combination of 2 letter word 
#include<conio.h>
#include<stdio.h>

int main(){
	
	int i,j;
	//i is ist letter j is 2nd letter
	
	for(i=0;i<=120;i++)
		for(j=0;j<=120;j++){
			
			if (123-i==105-j)
				printf("\n(%d,%d)%c%c",i,j,i,j);
		}
	
	getch();
	return 0;
}
