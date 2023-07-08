#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
//a,b,c, dis 
	float a,b,c, dis,root1, root2,g;
	printf("note: make sure equation is in ax^2+bx+c form.\n");
	printf("first co-efficent  a: ");
	scanf("%d",&a);
	printf("second co-efficent b: ");
	scanf("%d",&b);
	printf("third co-efficent c: ");
	scanf("%d",&c);
	
	dis=pow(b,2)-4*a*c;
	
	root1=(-b+sqrt(dis))/2*a;
	root2=(-b-sqrt(dis))/2*a;
	printf("roots of quadratic eqn are %.2f and %.2f",root1,root2);
	
	
	getch();
	return 0;
	
}
