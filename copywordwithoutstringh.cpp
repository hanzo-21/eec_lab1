//wap to enter a string and copy to another with out using striung handelliung funtion 

#include<stdio.h>
#include<conio.h>

int main(){
	
	char name[20],copy[20];
	int i;
	
	printf("enter word ");
	gets(name);
	
	for (i=0;name[i]!='\0';i++){
		copy[i]=name[i];
	}
	
	printf("copied woed is %s",copy);
	getch();
	return 0;
}
