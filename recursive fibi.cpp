#include<stdio.h>
#include<conio.h>

//int fibi(int);

int main (){
	
	int i, n,j=8; 
	
	printf("enter n");
	scanf("%d", &n);
	
	for( i=0 ; i<=n ; i++){
//		j=fibi(i);
		
		printf("%d \n", i );
	}
	

	getch();
	return 0;
}
//
//int fibi( int x){
//	
//	if (x==0 || x==1)
//		return x;
//	else
//		return( fibi(x-1) + fibi(x-2));
//	
//}
