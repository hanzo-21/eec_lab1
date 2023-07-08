/*
WAP to input an integer value(or initialize directly) and
 display it using void pointer variable.
*/

#include"stdio.h"
#include"conio.h"
int main(){
	
	int a=24;
	void *b;			//declare  void pointer  variable
	
	b= &a;
	
	printf("a = %d ", *(int * )b);
		
	getch();
	return 0;
}
