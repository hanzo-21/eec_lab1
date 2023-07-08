//greates using user defined functions


#include <stdio.h>
#include<conio.h>

int great (int num[]);

int main(){
	
	int i,num[3];
	
	printf("enter 3 numbers \n");
	for (i=0;i<3;i++)
		scanf("%d",&num[i]);
	

		
	if(num[0]==num[1] && num[0]==num[2])
		printf("all numbbers are equal ");
	else
		printf("%d is the greatest", great(num));		

		

	
	getch();
	return 0;
}

int great(int num[]){
	int i,j,k;
	
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
		
			if (num[i]<num[j]){
				
				k=num[i];
				num[i]=num[j];
				num[j]=k;
			}
		}
	}
	
	return num[0];
}
