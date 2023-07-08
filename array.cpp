#include <stdio.h>
#include <conio.h>
#include <string.h>

int main (){
	
	char aa[20];
	int i,n,m,mod;
	
	printf("enter ");
	//getstr(aa);
	scanf("%[^\n]s",&aa);
	i=strlen(aa);
	
	for (n=0;i>n;n++){
		m=aa[n];
		mod=m%2;
		if(mod==0){
			printf("%c",aa[n]-32);
		}
		else{
			printf("%c",aa[n]);
		}
	}
	printf("\r");
	
	getch();
	return 0;
}
