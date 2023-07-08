/* wap to take character input and display "valid character input" if character is in lower-case else dislpy
"invalid character input"
-aayush rana magar*/
#include <stdio.h>
#include <conio.h>

int main(){
	
	//declating variable 
	char in;
	int num;
	
	//taking character input
	printf("enter a character ");
	scanf("%c",&in);
	
	//checking the input chracter and disply result
	num=in;
	if (num>=97 && num<=122){
			printf("valid character input");	
		}
	else{		
			printf("invalid character input");
		}
	
	getch();
	return 0;
}
