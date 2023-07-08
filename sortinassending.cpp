//enter name of n students and arrange them in accending order


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char name[10][20],temp[20];
	int i, n,j;
	
	printf("enter number of student (n)");
	scanf("%d",&n);
	
	printf("enter %d students name\n",n);
	fflush(stdin);

	for (i=0;i<n;i++){
		gets(name[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
	
			if(strcmp(name[i],name[j])>0){
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%s \n",name[i]);
	}
	
	getch();
	return 0;
}
