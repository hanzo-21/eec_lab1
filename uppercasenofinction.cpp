//wapt o enter word and make it alll upper case with our string.h


#include<stdio.h>
#include<conio.h>

int main(){
	
	char name[20],temp;
	int i,n;
	
	printf("enter name ");
	gets(name);
	
	for(i=0;name[i]!='\0';i++){
		if(name[i]>='a'&& name[i]<='z'){
			name[i]=name[i]-32;
		}
	}
		
	
	printf("uppercase; \n%s",name);
	getch();
	return 0;
}
