/*4. Write a C program to input n numbers and find largest and smallest number and display it.
 aayush rana magar*/
 
 #include <stdio.h>
 #include <conio.h>
 
 int main (){
 	
 	int n,i,set[20],big,smol;
	printf("enter number of terms (n) ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf( "enter term no %d = ",i+1);
		scanf("%d",&set[i]);
	}
	big=set[0];
	smol=set[0];
	for(i=1;i<n;i++){
		if (set[i]>big){
			big=set[i];
		}
		if(set[i]<smol){
			smol=set[i];
		}
	}
	printf("\nlargest number = %d \n smallets number =%d",big,smol);	 	
	getch();
	return 0;
 }
