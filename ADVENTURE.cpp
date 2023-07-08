#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(){                           
	
	//variable intilization FOR MOVEMENT KEY
	int mov_num,loop;
	char mov_car;
	
	//variable intilization FOR CHECK AND DISPLAY
		int loop10,loop1,check,mod;
		
	//file options variables 
	char file;
	
	//placing intial position 
	mov_num=55;
	
	//loop
	
	up:																			// destination of code line(222,209)	
	printf("\t\t\tW(up),S(down),A(left),D(right),O(out/exit), Keys .\n\n\t\t\t Key to the puzzle is there are no accidents .\n\t\t\t press enter to kontinue ");
	getch();
	

	
	for(;;){																			//loop begins here
	
		start:																	// destination of code line(161, 153)
		
		system("cls");															// clear screan
			

		for (loop1=1;loop1<=10;loop1++){   				//loop for ones place

	
			for (loop10=0;loop10<=9;loop10++){   		//loop for tens place and display
			
				check=loop10*10+loop1;
				
				if(check==mov_num){								//for arrow hints
				
					if (check<69){							//right side
			
						if(check<=10){						//0 to 10
							printf("[-->]\t");
						}
						else if (check>20 && check <=30){	//20 to 30
							mod=check%2;
							if (mod==0){
								printf("[-->]\t");
							}
							else{
								printf("[]\t");						
							}
						}
						else if(check>40 && check<=50){			//40 to 50
							mod=check%3;
							if (mod==0){
								printf("[-->]\t");
							}
							else{
								printf("[]\t");
							}
						
						}										
						else if (check==61 || check==64 || check==68){			//for down 
							printf("[\\/]\t");
						}	
						else{
							printf("[]\t");
						}
					}
					else if (check==70){							//for up
						printf("[^]\t");					
					}
					else if(check>=71){
						if (check<=80){
							mod=check%3;
							if (mod=0){
								printf("[<--]\t");
							}
							else{
								printf("[]\t");
							}
						}
						else if (check<=100){
							mod=check%2;
							if (mod==0){
								printf("[<--]\t");
							}
							else{
								printf("[]\t");
							}
						}
					}
					else if(check==69){
						printf("[NICE]\t");
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
	
	
		
		mov_car=getch();										//getting the direction
		strlwr(mov_car);
			
		if(mov_car=='w' ){										//move up wards
			--mov_num;
		}	
		else if(mov_car=='s'){ 								//move down
			++mov_num;	
		}	
		else if(mov_car=='a'){							//move left
			mov_num-=10;
		}			
		else if(mov_car=='d'){					//move right
			mov_num+=10;
		}					
		else if (mov_car=='o'){							//exit 
			system("cls");																//thank you
			printf(" \t\ahh i see. you coudnt solve the puzzle. and you decided to give up.\n very well then.");
			getch();
			goto almost_end;									// jumps to code line 212
		}								
		else if(mov_car=='k'){	//esteregg
			system("cls");
			printf("\t\t\tyou have found the \"k\"ey to the puzzle.");
			getch();
			goto gg;											//jumps to code line 167 
		}																								
		else{							//error		
			system("cls");													
			printf("\t\t\tuse W(up),S(down),A(left),D(right),O(out/exit), Keys . press enter to kontinue.");
			getch();
		}							

		if (mov_num<1){	
			system("cls");															//min limit
			printf("you have hit a wall. press enter to continue.");
			getch();
			mov_num=0;
			system("cls");	
			goto start; 															// jumps to code line 31
		}
			else if (mov_num>100)												//max limit
			{
				system("cls");
				printf("this is your limit 2. \nthink outside the box from inside the box.\n. so stop. get some help");
				mov_num=100;
				getch();	
				goto start;														// jumps to code line 31
			}
		//END LOOP FOR ( infintite loop)
	}																			
																		
	gg:																			// destination for code lines(149)
	
	if(mov_num==69){															//final peace of puzzle and price
		system("cls");
		printf("\t\t\tyou have solved the puzzle");
		getch();
		system("cls");
		printf("\t\t\tretreving memory arhive.\n\t\t\t wait for some time...");
		sleep(5);
		system("cls");
		printf("\t\t\t3 files detected\n \t\t\t1: memory file 1 \n\t\t\t2: memory file 2\n \t\t\t3: memory file 3\n\t\t\tchoose your file. trust me choose 1, 2 or 3 ONLY ");
		file=getch();														//choose a or b or c or  other
		
		switch(file){
			
			case '1':
				system("cls");
				printf("\t\t\tyour choice is memory file 1\n\t\t\topening wait for it....");
				sleep(3);
				system("start https://www.mickaelwalter.fr/content/images/size/w2000/2020/05/hackerman.png"); //hackman png
				break;
			case '2':
				system("cls");
				printf("\t\t\tyour choice is memory file 2\n\t\t\topening wait for it....");
				sleep(3);
				system("start https://i.redd.it/t3dlryme05o51.jpg");										//52.68.96.58 (actual website is out of commsion so i improvised )	
				break;
			case '3':
				system("cls");
				printf("\t\t\tyour choice is memory file 3\n\t\t\topening wait for it....");
				sleep(3);
				system("start https://youtu.be/buibvKTfGXU");										//youtube video
				break;
			default:
				system("start https://youtu.be/dQw4w9WgXcQ");
				break;				
		}				
	}
	else{
		system("cls");
		printf("\t\t\tbut this is the wrong house.\n\t\t\tyou lost boi!!");
		getch();
		goto up;																	// jumps to code line 31
	}
	
	
		
	almost_end:																		//destinatin for code lines( 133)
	
	system("cls");
	printf("\t do you wish to play again?\n\t dont you want to wanna eplore othere memory files. \n\t press y to play again");								//another one?
	
	mov_car=getch();
	strlwr(mov_car);
	
	mov_num=55;
	system("cls");

	
	if(mov_car=='y'){ 												// another one condition 
		goto up;       															//jumps to code line 23
	}
	else{
		goto last;																// jumps to code line 228
	}
	
	last:																		// destination for code line 225
		
	system("cls");																//thank you
	printf(" \t\a thank you for participating!!!:)\n-aayush rana magar");
	
	getch();
	return 0;
}
