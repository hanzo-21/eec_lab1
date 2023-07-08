//accending number

#include <stdio.h>
#include <conio.h>

int main(){
	
	int set[30],i,j,k,temp,n;
	
	printf("enter numbe of terms");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&set[i]);
		
	for(i=0;i<n-1;i++){//n-1 because last element do not need to ceck itself
		
		for(j=i+1;j<n;j++){
			
			if(set[i]>set[j]){
				
				temp=set[i];
				set[i]=set[j];
				set[j]=temp;
			}
		}
	}
	printf("sorting /n");
	for(i=0;i<6;i++){
		printf("\n%d",set[i]);
	}
		
		
	//////////////////////////////////////////////////////////////////////////////////
		for(i=0;i<n-1;i++){//n-1 because last element do not need to ceck itself
		
			for(j=i+1;j<n;j++){
			
				if(set[i]<set[j]){
				
					temp=set[i];
					set[i]=set[j];
					set[j]=temp;
				}
			}
		}
	printf("\n sorting /n");
	for(i=0;i<n;i++)
		printf("\n%d",set[i]);	
	
	
	getch();
	return 0;
}
