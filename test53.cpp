#include <stdio.h>
#include <conio.h>

int main(){
	
	int num[10],i, pos=0, n , neg=0, zero=0;
	
	printf("enter number n");
	scanf("%d",&n);
	printf("\nenter numbers");
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		if(num[i]>0){
			pos++;
		}
		else if (num[i]<0){
			neg++;
		}
		else{
			zero++;
		}
	}
	printf("number of +ve=%d\nnumber of -ve=%d\nnumber of 0=%d ",pos,neg,zero);
	
	getch();
	return 0;	
}
