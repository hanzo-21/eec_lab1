// not i know the difference is 4 now i can de code 

#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){
	
	int i,len,n;
	char c[]="jsvkix";
	
	len=strlen(c);
	
	for(i=0;i<len;i++){
		n= (int) c[i] -4;
		printf("\n%c",n);
	}
	
	
	
	
	getch();
	return 0;
}
