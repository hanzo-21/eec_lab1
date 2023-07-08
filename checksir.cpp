#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
	{
		int i,j,n;
		char name[10][20],temp[20];
		
		//take input
		printf("Enter the number of students\n");
		scanf("%d", &n);
		
		printf("Enter the name of %d students:\n", n);
		for(i=0; i<n; i++){
			scanf("%s",name[i]); //or use gets(name[i]) for taking i/p with whitespace
		}

		//sort names
		for (i=0; i<n-1; i++){
			for (j=i+1; j<n; j++){
				if (strcmp(name[i], name[j]) < 0){
					strcpy(temp, name[i]);
					strcpy(name[i], name[j]);
					strcpy(name[j], temp);
				}
			}
		}
		
		//display sorted names
		printf("Name of students in alphabetical order are \n");
		for (i=0; i<n; i++){
			puts(name[i]);
		}

				getch();
				return 0;
}
