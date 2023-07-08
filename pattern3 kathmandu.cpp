/* pattern

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

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char str[]="KATHMANDU";
	int i,j,k,l,len;
	
	printf("reverse code this \nchoose to accept it\n\n");
	
	
	len=strlen(str);
	
	for(i= len-1;i>=0;i--){
		
		l=(len-i)/2;
		for(k=0;k<l;k++)
			printf(" ");
		
		for(j=0;j<=i;j++){
			printf("%c",str[j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}

