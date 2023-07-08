/*pattern

K
KA
KAT
KATH
KATHM
KATHMA
KATHMAN
KATHMAND
KATHMANDU
*/

#include <stdio.h>
#include<conio.h>

int main(){
	
	char str[]="KATHMANDU";
	int i,j;
	
	for(i=0; str[i]!=0;i++){
		for(j=0;j<=i;j++){
			printf("%c", str[j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
