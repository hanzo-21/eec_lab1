/*2. WAP to read the marks of n students, calculate and display the average marks and 
deviation of marks of each student from average marks.
aayush rana magar*/

#include<stdio.h>
#include<conio.h>

int main (){
	
	int stu[20],i,n;
	float avg,sum;
	
	printf("enter number of student (n)");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("mark of student no %d= ",i+1);
		scanf("%d",&stu[i]);
		sum=sum+stu[i];
	}
	
	avg=sum/n;
	printf("\naverage mark= %.3f\n\n",avg);
	
	for(i=0;i<n;i++){
		printf("deviation of marks of student no %d = %.3f\n",i+1,avg-stu[i]);
	}
	
	getch();
	return 0;
}
