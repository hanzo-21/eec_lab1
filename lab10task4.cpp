/*4. WAP to input n elements in an array and find the difference of highest marks and lowest 
marks.
aayush rana magar*/


#include <stdio.h>
#include <conio.h>

int main(){
	
	int set[20],big,smol,dff,i,n;
	
	printf("enter number of eliments (n) ");
	scanf("%d", &n);
	printf("enter numbers\n");
	
	for(i=0;i<n;i++)
		scanf("%d", &set[i]);
		
	big=set[0];
	smol=set[0];	
	for(i=1;i<n;i++){
		if(set[i]>big){
			big=set[i];
		}
		if(set[i]<smol){
			smol=set[i];
		}	
	}
	
	dff=big-smol;
	
	printf("the difference of highest marks and lowest marks= %d",dff);
	
	
	getch();
	return 0;
}
