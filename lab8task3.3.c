/*3. 4 3 2 1 0
3 2 1 0
2 1 0
1 0
0
aayush rana magar 
*/

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
		j--;
		}
		j=4-loop;
		printf("\n");
		
	}
	
	getch();
	return 0;
}
