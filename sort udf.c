//wap to input an array of n elements and then sort it and display it using function

#include<conio.h>
#include<stdio.h>

void sort(int []);

int main(){
	
	int i,n,num[20];
	
	printf("enter n ");
	scanf ("%d",&n);
	printf("enter %d numbers\n",n);
	
	for (i=0;i<n;i++)
		scanf("%d", &num[i]);
		
	sort(num);
	
	
	getch();
	return 0;
} 



void sort(int num[]){
	
	int i,j,temp='\0';
	
	for(i=0;num[i]!='\0';i++)
		printf("%d\n", num[i]);
	
	for (i=0; num[i]!='\0';i++){
		
		for (j=i+1;num[j]!='\0';j++){
			
			if (num[i]>num[j]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
		
	}
	
	printf("\n\nsorted \n\n");
	
	for(i=0;num[i]!='\0';i++)
		printf("%d\n", num[i]);
	
	
}
