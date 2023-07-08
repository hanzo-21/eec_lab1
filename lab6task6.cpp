//6. WAP to input a character and convert it to
// uppercase if it is in lower case and vice-versa.
//aayush

#include<stdio.h>
#include <conio.h>

int main(){
	
	int num;
	char cas;
	
	printf("enter a character ");
//	cas=getchar();
	scanf("%c",&cas);
	num=cas;
	
	if (num>=65 && num<=90){			//input upper case 
		num+=32;
		printf("did you mean '%c'",num);
	}
	else if (num>=97 && num<=122){								//input lower case
		num-=32;
		printf("did you mean '%c'",num);
	} 
	else{
		printf("invald input\n\n");
	}
	

	getch();
	return 0;
}
