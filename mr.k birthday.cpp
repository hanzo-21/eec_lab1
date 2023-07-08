/*Mr. X's birthday is in next month. This time he is planning to invite N of his friends.
He wants to distribute some chocolates to all of his friends after party.
 He went to a shop to buy a packet of chocolates.
At chocolate shop, each packet is having different number of chocolates.
 He wants to buy such a packet which contains number of chocolates,
  which can be distributed equally among all of his friends.
Help Mr. X to buy such a packet.
Input:
First line contains T, number of test cases.
Each test case contains two integers, N and M. where is N is number of friends and 
M is number number of chocolates in a packet.
Output:
In each test case output "Yes" if he can buy that packet and "No" if he can't buy that packet.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	
	int N, M,T=1,mod;
	char a;
	
	printf("enter number of friends: ");
	scanf("%d",&N);
	
	for(;;){
		
		again:
		
		printf("test case %d: \n enter  number of chocolates in a packet(M): ",T);
		scanf("%d",&M);
		mod=M%N;
		
		if (mod==0){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
		printf("press y if you have more cases");
		a=getch();
		
		if(a=='y' || a=='Y'){
			T++;
			system("cls");
			goto again;
		}
		else{
			printf("\nthank you for participating.");
			goto end;
		}
	}	
	end:
	
	getch();
	return 0;
}
