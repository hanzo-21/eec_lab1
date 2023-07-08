#include<stdio.h>
#include<conio.h>
#include<stdlib.h >

int main(){                           
	
	//variable intilization
	int mov_num,loop;
	char mov_car;
	
	//placing intial position 
	mov_num=55;
	
	//loop
	
	up:																			// up goto ends here	
	printf("\t\t\tuse W,S,A,D,O, Keys .\n Key to the puzzle is there are no accidents .\n press enter to continue ");
	getch();
	

	
	for(;;){																			//loop begins here
	
		start:																	// start goto ends here 
		
		system("cls");															// clear screan
		
		printf("\t\t\t%d",mov_num);												//display number  (loop of number her for update version )
		
		six:
		
		mov_car=getch();														//getting the direction
			
		if(mov_car=='w' || mov_car=='W' ){										//move up wards
			mov_num=++mov_num;
			}	
			else if(mov_car=='s' || mov_car=='S'){ 								//move down
				mov_num=--mov_num;	
				}
				
				else if(mov_car=='a' || mov_car=='A'){							//move left
					mov_num=mov_num-10;
					}
					
						else if(mov_car=='d' || mov_car=='D'){					//move right
							mov_num=mov_num+10;
							}
							
								else if (mov_car=='o' || mov_car=='O'){							//exit 
									goto end;									//end goto behins here 
									}
									
										else if(mov_car=='k' || mov_car=='K'){	//esteregg
											system("cls");
											printf("\t\t\tyou have found the \"k\"ey to the puzzle.");
											getch();
											goto gg;
											}
																												
												else							//error
												{		
													system("cls");													
													printf("\t\t\tuse W,S,A,D,O, Keys . press enter to kontinue.");
													getch();
												}
							
	if (mov_num==69){														//SIXTY NINE	(mbay remove this and added to above display for update)
		system("cls");
		printf("\t\t\t NICE!");
		getch();
		goto six;
		}
		
	if (mov_num<1){	
		system("cls");															//min limit
		printf("you have hit a wall. press enter to continue.");
		getch();
		mov_num=0;
		system("cls");	
		goto start; 															// start goto begins here
		}
			else if (mov_num>1001)												//max limit
			{
				system("cls");
				printf("this is your limit 2. \nthink outside the box from inside the box.\n. so stop. get some help");
				mov_num=1000;
				getch();	
				goto start;														// start also beginis here
			}
		
	
	
	
	
	
	
	}																			//end loop
	
	end: 																		//end goto begins here as the user wants to quit the program
	
	system("cls");																//thank you
	printf(" \t\a i see. you coudnt solve the puzzle. and you decided to give up.\n very well then.");
	getch();
	
	gg:
	
	system("cls");
	printf("\t do you wish to play again? (y/n)");								//another one?
	mov_car=getch();
	system("cls");
	loop=(int)mov_car;
	
	if(loop==89 || loop== 121){ 												// another one condition 
		goto up;       															//re play puzzzle so this goto up up line
	}
	else{
		goto last;
	}
	
	last:
		
	system("cls");																//thank you
	printf(" \t\a thank you for participating!!!:)");
	getch();
	return 0;
}
