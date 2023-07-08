/*5. WAP to read a temperature in of a day in Fahrenheit to print
“Nice day” if temperature is greater than 60 but less than 80
“Cold day” if temperature is 60 or lower
“Hot day” if temperature is 80 or higher
*/

#include <stdio.h>
#include <conio.h>

int main(){
	int temp;
	
	printf("enter temprature in Fahrenheit: ");
	scanf("%d",&temp);
	
	if (temp<=60){
		printf("today %d'F \n cold day",temp);
	}
	else if(temp>60 && temp<80 ){
		printf("today %d'F  \n nice day",temp);
	}
	else{
		printf("today %d'F  \n hot day",temp);
	}
	
	getch();
	return 0;
		
}
