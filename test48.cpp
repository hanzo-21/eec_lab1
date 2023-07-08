#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main (){
	
	int a;
	char deb[a];
	for(;;){
		scanf("%d",&a);
	
		while (a!=a){
			scanf("%c",&deb[a]);
			a++;
		}
	
		printf("the  %s",deb);
		printf("*/*/*/*/*/*/*/*/*/*/*/*/*/*");
		getch();
		system("cls");
	}
	getch();
	return 0;
}
