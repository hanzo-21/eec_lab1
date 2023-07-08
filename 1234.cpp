#include <stdio.h>
#include <conio.h>

int main(){
	
	int a,b,i;
	
	for(a=1;a<=10;a++){
		
		for(b=1;b<=a;b++){
			printf("%d\t",i);
			i++;
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
