//wapt o enter word and make it alll lower case


#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	
	char name[20];

	
	printf("enter name ");
	gets(name);
	
	strlwr(name);
	
	printf("lowercase; \n%s",name);
	getch();
	return 0;
}
