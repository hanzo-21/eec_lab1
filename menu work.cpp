/* make menu as shown below

menu:
1. length of a string
2. copy one string to another string 
3. concate two string
4. reverse a string
5. compare two string
6. convert lower case to upper case
7. convert upper case to lower case 
8. exit

*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	char str[8][20],copy[20];
	int choice,space;
	
	for(;;){
		system("cls");
		printf("MENU\n1. length of a string\n2. copy one string to another string\n3. concate two string\n");
		printf("3. concate two string\n4. reverse a string\n5. compare two string\n6. convert lower case to upper case\n");
		printf("7. convert upper case to lower case\n8. exit\n\t\tchoose(1 tp 8)\n\t\t\t");
		scanf("%d",&choice);
		fflush(stdin);
		switch(choice){
			
			case 1: //1. length of a string
			
				system("cls");
				printf("1. length of a string\nenter string ");
				
				scanf("%[^\n]s",&str[0]);
				printf("lenght of string %d", strlen(str[0]));
				getch();
				break;
				
			case 2: //2. copy one string to another string
			
				system("cls");
				printf("2. copy one string to another string\nenter string ");
				scanf("%[^\n]s",&str[1]);
				strcpy(copy,str[1]);
				printf(" %s is copied",copy);
				getch();
				break;
				
			case 3: //3. concate two string
				
				system("cls");
				printf("3. concate two string\nenter first string ");
				scanf("%[^\n]s",&str[2]);
				printf("enter second string");
				fflush(stdin);
				scanf("%[^\n]s",&copy);
				printf("1. space in between\n2. no space");
				scanf("%d", &space) ;
				switch (space){
					case 1://fpr spcae
						strcat(str[2]," ");
						strcat(str[2],copy);
						break;
					
					default:
						strcat(str[2],copy);
						break;
				}
				printf(" concat = %s",str[2]);
				getch();
				break;				
				
			case 4: //4. reverse a string
				
				system("cls");
				printf("4. reverse a string\nenter string ");
				scanf("%[^\n]s",&str[3]);
				strrev(str[3]);
				printf("reverse= %s",str[3]);
				getch();
				break;
				
			case 5: //5. compare two string
			
				system("cls");
				printf("5. compare two string\nenter first string ");
				scanf("%[^\n]s",&str[4]);
				printf("enter second string");
				fflush(stdin);
				scanf("%[^\n]s",&copy);
				if(strcmp(str[4],copy)>0)
					printf("%s is greater than %s",str[4],copy);
				else if(strcmp(str[4],copy)<0)
					printf("%s is greater than %s",copy,str);
				else
					printf("%s is equal ", copy);
				getch();
				break;
				
			case 6: //6. convert lower case to upper case
			
				system("cls");
				printf("6. convert lower case to upper case\nenter string ");
				scanf("%[^\n]s",&str[5]);
				strupr(str[5]);
				printf("upper case \n%s",str[5]);
				getch();
				break;
				
		
			case 7: //7. convert upper case to lower case
			
				system("cls");
				printf("7. convert upper case to lower case\nenter string ");
				scanf("%[^\n]s",&str[6]);
				strlwr(str[6]);
				printf("lower case \n%s",str[6]);
				getch();
				break;
			
			case 8: // exit
				exit(0);
		
			default:
				system("cls");
				printf("enter correct optionns (1 to 8)");
				getch();
				break;
		}
	}
	
	getch ();
	return 0;
}


