//input 2 strings and checks which is geter or equal

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char word[2][20];
	
	printf("enter first word ");
	gets(word[0]);
	printf("enter second word ");
	gets(word[1]);

	if (strcmp(word[0],word[1])>0)
		printf("%s is greater then %s",word[0],word[1]);
	else if (strcmp(word[0],word[1])<0)
		printf("%s is less then %s",word[0],word[1]);
	else 
		printf("%s is equal to %s",word[0],word[1]);


	getch();
	return 0;
}
