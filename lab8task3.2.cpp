/*2. 4 4 4 4 4
3 3 3 3
2 2 2
1 1
0
aayush rana magar */

#include <stdio.h>
#include <conio.h>

int main(){
	
	int loop, i, j=4;
	
	while(loop<5){
		loop++;
		i=5;
		
		while(i>=loop){
			i--;
			printf("%d\t",j);
		}
		j--;
		printf("\n");
		
	}
	
	
	getch();
	return 0;
}
