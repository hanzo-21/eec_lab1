//2. WAP to count the total number of odd numbers from 1-100 and
//Total number of even from 100-200 and display it.

#include <conio.h>
#include <stdio.h>

int main(){
	
	int i, odd , eve, mod;
	
	for(i=1;i<=200;i++){
		mod=i%2;
		if (i<=100 && mod!= 0){
		
			odd++;
		}
		if (i>=100 && mod==0){
			eve++;
		}	
	}
	
	printf("Total number of odd numbers from 1-100= %d \nTotal number of even from 100-200= %d",odd,eve);
	
	getch();
	return 0;
}
