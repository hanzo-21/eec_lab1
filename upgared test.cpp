#include<stdio.h>
#include<conio.h>
#include<stdlib.h >


int main(){
	
	int loop10,loop1,check, num,mod;
	
	for (;;){
		
	printf("enter number (1 to 100);");
	scanf("%d",&num);
	

	
		system("cls");
		
		for (loop1=1;loop1<=10;loop1++){   				//loop for ones place

	
			for (loop10=0;loop10<=9;loop10++){   		//loop for tens place and display
			
				check=loop10*10+loop1;
				
				if(check==num){								//for arrow hints
				
					if (check<69){			//right side
			
						if(check<=10){						//0 to 10
							printf("-->\t");
						}
						else if (check>20 && check <=30){	//20 to 30
							mod=check%2;
							if (mod==0){
								printf("-->\t");
							}
							else{
								printf("[]\t");						
							}
						}
						else if(check>40 && check<=50){			//40 to 50
							mod=check%3;
							if (mod==0){
								printf("-->\t");
							}
							else{
								printf("[]\t");
							}
						
						}										
						else if (check==61 || check==64 || check==68){			//for down 
							printf("\\/\t");
						}	
						else{
							printf("[]\t");
						}
					}
					else if (check==70){							//for up
						printf("^\t");					
					}
					else if(check>=71){
						if (check<=80){
							mod=check%3;
							if (mod=0){
								printf("<--\t");
							}
							else{
								printf("[]\t");
							}
						}
						else if (check<=100){
							mod=check%2;
							if (mod==0){
								printf("<--\t");
							}
							else{
								printf("[]\t");
							}
						}
					}
					else if(check==69){
						printf("NICE\t");
					}
					else{
						printf("[]\t");
					}
				}
				else {
					printf("%d\t",check);	
				}
			}// END LOOP FOR (loop for tens place and display))
			printf("\n");	
		}//END LOOP FOR ( loop for ones place
	}//END LOOP FOR ( infintite loop)
	getch();
	return 0;
}
