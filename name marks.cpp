//WAP that asks the name of student and marks obtained by him/her in 10 subjects. 
//Display the percentage of the student assuming full marks as 100 for each subject. 
#include<stdio.h>
#include<conio.h>
 main(){
	//variable declarion 
	char name[20];
	 float math, opt_math, eng, nep, com, phy, chem, bio, moral, heal, sum, percent;
	//variable initilization 
	
	printf("Enter the name of the student\t");
	scanf("%s",name);
	printf("full mark for each subject is 100\n\n");
	printf("enter marks obtain in \n math\t\t");
	scanf("%f",&math);
	
	printf("\n opt_math\t");
	scanf("%f",&opt_math);
	
	printf("\n english\t");
	scanf("%f",&eng);
	
	printf("\n nepali\t\t");
	scanf("%f",&nep);
	
	printf("\n computer\t");
	scanf("%f",&com);
	
	printf("\n physics\t");
	scanf("%f",&phy);
	
	printf("\n chemistry\t");
	scanf("%f",&chem);
	
	printf("\n biology\t");
	scanf("%f",&bio);
	
	printf("\n moral science\t");
	scanf("%f",&moral);
	
	printf("\n health edu\t");
	scanf("%f",&heal);
	
	//calulate percent 
	sum=math + opt_math + eng + nep + com + phy + chem + bio + moral + heal;
	percent= sum/10;
	
	// display
	printf(" \n\n Percentage of Master %s  is %.2f %c .",name,percent,37);
	getch();
}
