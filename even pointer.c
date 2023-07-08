//wap to input n elements and display all the even numbers using dma

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *ptr=NULL;
	int n,i;
	
	
	printf("enter n ");
	scanf("%d",&n);
	
	ptr= (int*) malloc(n*sizeof(int));
	
	if (ptr == NULL){
		printf("memory not allocated");
		exit(1);
	}
	
	printf("enter %d numbers", n);
	
	for(i=0;i<n;i++){
		scanf("%d", ptr+i);
	}
	
	// check if even and if yes display it
	printf("\neven number\n");
	
	for (i=0;i<n;i++){
		if(*(ptr+i)%2==0)
			printf("%d\n",*(ptr+i));
	}
	
	free(ptr);
	
	getch();
	return 0;
}
