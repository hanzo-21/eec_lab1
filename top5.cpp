//top five display

#include<stdio.h>
#include<conio.h>
int main()
{
float marks[100],temp;
int i,j,n;
printf("Enter the number of students\n");
scanf("%d",&n);
printf("Enter the marks of %d students\n",n);
for(i=0;i<n;i++)
{
scanf("%f",&marks[i]);
}
printf("\nEntered marks of studenst are:\n");
for(i=0;i<n;i++)
{
printf("%f\n",marks[i]);
}
for(i=0;i<n-1;i++)
{
 for(j=0;j<n-i-1;j++)
 {
if(marks[j]<marks[j+1])
 { 
 temp=marks[j];
 marks[j]=marks[j+1];
 marks[j+1]=temp;
}
 } 
}
printf("\nMarks of Top five students are:\n");
for(i=0;i<5;i++)
{
printf("%f\n",marks[i]);
}
getch();
return 0;
}

