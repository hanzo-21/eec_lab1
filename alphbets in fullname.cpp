//wapt o enter fullname and count character excluding white space

#include<stdio.h>
#include<conio.h>

int main(){
	
	char name[20];
	int i, n=0;
	
	printf("enter name ");
	gets(name);
	
	for (i=0;name[i]!='\0';i++){
		if(name[i]!=' ')
			n++;
	}
	
	printf("your name is %s \n it has %d alphabets",name,n);
	getch();
	return 0;
}
