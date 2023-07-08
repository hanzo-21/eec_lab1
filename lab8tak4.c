	/*. Write a menu driven program that performs the following tasks.
1. Check a prime number.
2. Check an Armstrong number
3. Check a palindrome number
4. Exit
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int check,num,i,mod,sum=0,rev=0,qut=0;
	
	for(;;){
		system("cls");
		printf("\t\t\t 	MENU \n1. Check a prime number.\n2. Check an Armstrong number\n3. Check a palindrome number\n4. Exit \nenter your choice ");
		scanf("%d",&check);
		
		switch(check){
				//Check a prime number
			case 1:
				system("cls");
				printf("enter a number ");
				scanf("%d",&num);	
				if(num==1){
					printf("%d is not a prime number",num);
					goto end;
				}
				for(i=2;num>i;i++){
					mod= num%i;
				
					if (mod==0){
						printf("%d is not a prime number",num);
						goto end;
					}
				}		
				printf("%d is a prime number",num);
				end:
				break;
				//Check an Armstrong number		
			case 2:
				system("cls");
				printf("enter a number ");
				scanf("%d",&num);
				i=num;
				while (num!=0){
					qut=num%10;
					sum=sum+pow(qut,3);
					num=num/10;
				}
				printf("sum= %d\n",sum);
				if (i==sum){
					printf("%d number is Armstrong",i);
				}
				else{
					printf("%d number is not Armstrong",i);
				}
				break;
			    //Check a palindrome number
			case 3:
				system("cls");
				printf("enter a number ");
				scanf("%d",&num);
				i=num;
				while (num!=0){
					qut=num%10;
					rev=(rev*10)+qut;
					num=num/10;
				}
				if (i==rev){
					printf("%d number is palindrome",i);
				}
				else{
					printf("%d number is not palindrome",i);
				}
				break;
				//exit
			case 4:
				exit(1);
				break;
				//for garbeg inputs
			default:
				system("cls");
				printf("choose a valid options \n(enter to continue)");
				getch();
				break;
		}
		getch();	
	}

	return 0;
}
