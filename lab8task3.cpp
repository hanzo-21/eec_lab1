/*3. WAP to print the following pattern.
1. 1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15
-aayush rana magar */

#include <stdio.h>
#include <conio.h>

int main(){
	
	int loop, i, j=1;
	
	while(loop<5){
		loop++;
		i=1;
		
		while(i<=loop){
			i++;
			printf("%d\t",j);
			j++;
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
