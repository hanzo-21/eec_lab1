/*3. WAP to input marks of n students and then display the top 5 marks
aayush rana magar*/

#include <stdio.h>
#include <conio.h>

int main (){
	
	int mark[20], i,j,k,n;
	
	printf("enter number of students (n) ");
	scanf("%d", &n);
	printf("enter marks\n");
	for(i=0;i<n;i++)
		scanf("%d", &mark[i]);
	
	//j=mark[0];	
	for(i=0;i<n-1;i++){
		
		for(j=i+1;j<n;j++){
			if(mark[i]<mark[j]){
				k=mark[i];
				mark[i]=mark[j];
				mark[j]=k;
			}
		}
			
	}
	
	printf("\ntop 5 mark\n");
	for(i=0;i<5;i++)
		printf("%d\n", mark[i]);
	
	getch();
	return 0;
}
