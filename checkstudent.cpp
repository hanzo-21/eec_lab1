// enter n number of studens and search for a student 

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	
	char name[10][20],check[20];
	int i,n;
	
	printf("enter number of student (n)");
	scanf("%d",&n);
	printf("enter %d students name\n",n);
	fflush(stdin);

	for(i=0;i<n;i++)
//		scanf(" %[^\n]s",name[i]);  
		gets(name[i]);
		
	
	printf("saerch for- ");
	scanf(" %[^\n]s",check);
	 
	for(i=0;i<n;i++){
		if(strcmp(name[i],check)==0){
			printf("%s is found.",check);
			exit(0);
		}
	}
	
	printf("%s not found",check);
	
	
	
	
	getch();
	return 0;
}
