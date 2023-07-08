/*pattern

KATHMANDU
KATHMAND
KATHMAN
KATHMA
KATHM
KATH
KAT
KA
K
*/

#include <stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char str[]="KATHMANDU";
	int i,j,len;
	
	len=strlen(str);
	
	for(i=len-1; i>=0;i--){
		for(j=0;j<=i;j++){
			printf("%c", str[j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
