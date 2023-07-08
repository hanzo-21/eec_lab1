/* wap a menu which can perform following operators (use function)

1. factorical of a number
2. sum of first 10 natural number 
3. maximum number in an array 
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int fact(int);
void sum();
int max(int);

int main(){
	
	int choice,n;
	
	for(;;){
	
		system("cls");
		fflush(stdin);
		printf("MENU:\n1. factorical of a number\n2. sum of first 10 natural number\n3. maximum number in an array\n4. exit\n choose (1 to 4)\n\t\t");
		scanf("%d", &choice);
		
		switch(choice){
			
			case 1:
				
				printf("\n1. factorical of a number\nenter numer ");\
				scanf("%d",&n);
				n=fact(n);
				printf("factorial = %d ",n);
				getch();
				break;
			 
			case 2:
				printf("\n2. sum of first 10 natural number\n");
				sum();
				getch();
				break;
				
			case 3:
				printf("\n3. maximum number in an array\nenter number of elements ");
				scanf("%d",&n);
				n=max(n);
				printf("max number is %d ",n);
				getch();
				break;

			case 4:
				exit(0);
			default:
				printf("invalide input");
				getch();
				break;
		}
	}
	getch();
	return 0;	
}


int fact(int x){
	int i,mul=1;
	for(i=1;i<=x;i++){
		mul*=i;
	}
	return mul;
}

void sum(){
	int i, j=0;
	for(i=0;i<=10;i++){
		j+=i;
	}
	printf("sum of forst 10 natural number is %d ", j);
}

int max(int x){
	int i, num[20],temp;
	
	printf("enter %d numbers\n",x);
	for(i=0;i<x;i++){
		scanf("%d",&num[i]);
	}
	temp=num[0];
	for(i=0;i<x;i++){
		if(num[i]>temp)
			temp=num[i];
	}
	return temp;	
}







