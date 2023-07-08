//top 3 (display in  loop , sort in accending )

#include <stdio.h>
#include <conio.h>

int main(){
	
	int set[30],i,j,k,temp,n;
	
	printf("enter numbe of students (n) ");
	scanf("%d",&n); 
		
	for(i=0;i<n;i++){
		printf("mark of student no %d= ",i+1);
		scanf("%d",&set[i]);	
	}
		
	for(i=0;i<n-1;i++){
		
		for(j=i+1;j<n;j++){
			
			if(set[i]>set[j]){
				
				temp=set[i];
				set[i]=set[j];
				set[j]=temp;
			}
		}
	}
	printf("\ntop 3 marks are ");
	
	k=n;
	for(i=k-3;k>i;k--){
		printf("\n%d",set[k-1]);
	}
	
	//alternate way
	k=n;
	for(i=0;i<3;i++){
		printf("\n%d",set[--k]);

	}
	
	getch();
	return 0;
}
