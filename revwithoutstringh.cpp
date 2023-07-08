//reverse a string with out using a string handelling function

#include<stdio.h>
#include<conio.h>


int main(){
	
	char name[20],temp;
	int i, n , len=0;
	
	printf("enter word ");
	gets(name);
//	scanf("%s",&name);	
//	len=strlen(name);
	
	for(i=0;name[i]!=0;i++)
		len++;

	for (i=0,n=len-1;i<len/2;i++,n--){
		temp=name[i];
		name[i]=name[n];
		name[n]=temp;
	}
	
	printf("reverse  word is %s ",name);
	getch();
	return 0;
}
