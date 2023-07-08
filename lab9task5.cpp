/*5. WAP to input n elements in array and copy that elements into another array.
aayush rana magar*/

#include <stdio.h>
#include <conio.h>

int main(){
	
	int n,i,num[20],dub[20];
	
	printf("enter number of elements (n) ");
	scanf("%d",&n);
	printf("enter %d numbers now\n",n);
	
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		dub[i]=num[i];
	}
	printf("num\t=\tdub\n");
	for(i=0;i<n;i++){
		printf("%d\t=\t%d\n",num[i],dub[i]);
	}
	
	getch();
	return 0;
}
