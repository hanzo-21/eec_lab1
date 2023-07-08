//string and its finctions
//string with get and  scanf and sting length

#include<stdio.h>
#include<conio.h>
#include<string.h>//string handalleing function

int main(){
	
	char name[10], your[10],pass[10];
	int len,check=0;
	
	printf("entr name ");
	scanf("%[^\n]s ", name);		//[^\n] makes take white space too
	
	//gets(name[10]);
	len=strlen(name);
	strcpy(your,name);
	
	printf("\nyour name is %s is of %d",name,len);
	printf("\nyour name is also %s", your);
	
	
	//reverse
	strrev(your);
	printf("\n in reverse is %s", your);
		strrev(your);
	
	
	//compare
	printf("\n\n\nenter password ");
	scanf("%s",pass);
	
	check=strcmp(name,pass);
	
	if (check==0){
		printf("\npassword correct");
	}
	else{
		printf("\npassword incorrecxt");
	}
	
	
	//adding 2 strings or Concatenates
	strcat(your," ");
	strcat(your,pass);
	printf("\n\nadding them we get %s", your);
	
	//lower case all
	strlwr(your);
	printf("\n\nlow key i fell %s",your);
	
	//upper case all
	strupr(your);
	printf("\n\nhigh key be like %s", your);
	
	
	
	
	
	getch();
	return 0;
}
