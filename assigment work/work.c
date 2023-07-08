#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct ckt{
	char country[20];
	char name[20];
	char type[20];
	int match;
	float salary;
};

int main (){
	
	struct ckt info[30];
	int i,n; 
	char ch='y';
	FILE *fptr;
	fptr=fopen("cricket.txt","w+");
	
	if (fptr== NULL){
		printf("error");
		exit(1);
	}
	
	for(i=0; ch=='y' || ch== 'Y'; i++ ){
		
		printf("enter country name ");
		scanf("%s", info[i].country);
		
		printf("enter name ");
		scanf("%s", info[i].name);
	
		printf("enter enter playing type ");
		scanf("%s", info[i].type);
		
		printf("enter number of match played ");
		scanf("%d", &info[i].match);
		
		printf("enter salary ");
		scanf("%f", &info[i].salary);
		
		printf("press y to add more players ");
		fflush(stdin);
		ch=getche();
		printf("\n");
		
	}
	
	n=i+1;
	fwrite(&info,sizeof(info),n,fptr);
	rewind(fptr);
	
	printf("\nplayers with more than 10 matches");
	
	fread(&info,sizeof(info),n,fptr);
	printf("\ncountry\t|name\t\t|type\t\t|matches played\t|salary\n");
	
	for(i=0; i<n; i++ ){
		if (info[i].match>10){
			printf("%s\t|%s\t\t|%s\t\t|%d\t\t|%.2f\n",info[i].country,info[i].name,info[i].type,info[i].match,info[i].salary);
			
		}
	}
	
	
	fclose(fptr);
	
	getch();
	return 0;
}
