#include<stdio.h>
#include<conio.h>

void dec(int * , int );

int main(){
	
	int num[20], n, i,*ptr;
	ptr=num;
	printf("enter n");
	scanf("%d", &n);
	printf("enter %d numbers\n",n);
	for(i=0;i<n;i++)
		scanf("%d", ptr+i);
		
	dec(num,n);
	
	printf("\nsort in decneding ");
	for(i=0;i<n;i++)
		printf("\n%d", *(ptr+i));
	
	getch();
	return 0;
}


void dec(int *num, int n){
	int i,j, temp; 
	
	for (i=0; i<n-1;i++){
		
		for (j=i+1;j<n;j++){
			
			if (*(num+i)<*(num+j)){
				temp=*(num+i);
				*(num+i)=*(num+j);
				*(num+j)=temp;
			}
		}
		
	}
	
}
