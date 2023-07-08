//wapt o enter word and make it alll UPPRCASE case


#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	
	char name[20];

	
	printf("enter name ");
	gets(name);
	
	strupr(name);
	
	printf("uppercase; \n%s",name);
	getch();
	return 0;
}
