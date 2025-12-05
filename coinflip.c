#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include<windows.h>

int main(){
    int Gametype,choice,result;
    srand(time(0));
    printf("--WELCOME TO THE COIN FLIP GAME--\n");
    printf("  Game Type  \n");
    printf("  1.Single round  \n");
	printf("  2.Best Of 3  \n");
	
	printf("Enter your Game type(1 or 2):");
	scanf("%d",&Gametype);
	switch(Gametype){
		case 1:
		printf("    --Choose your side--   \n\n");
    printf("1.HEADS");
    printf("          2.TAILS");

    printf("\nEnter your side(1 or 2):");
    scanf("%d",&choice);
    // random results = 0
    // random results = 1
    result = rand()%2; // 0 = HEADS, 1= TAILS
    
    int i;
    for(i=0;i<1;i++){
    	printf("\nflipping coin");
    	fflush(stdout);
    	Sleep(500);
    	printf(".");
    	fflush(stdout);
    	Sleep(500);
    	printf(".");
    	fflush(stdout);
    	Sleep(500);
    	printf(".");
    	fflush(stdout);
    	Sleep(500);
    	printf(".");
    	fflush(stdout);
    	Sleep(500);
    	printf(".");
    	fflush(stdout);
    	Sleep(500);
    	fflush(stdout);
    	Sleep(500);
    	printf(".");
    	fflush(stdout);
    	Sleep(500);
  
    	
	}
	
	if(result == 0){
		printf("\nResult: --->HEADS<---");
	}
	else
	{
		printf("\nResult: -->TAILS<--\n");
	}
	if(choice==1 && result == 0 || choice == 2 && result==1){
		printf("\n-----YOU WIN-----\n");
	}
	else
	{
		printf("-----YOU LOSE-----\n");
	}
	
	break;
	
	case 2:
		
    printf("    --Choose your side--   \n\n");
    printf("1.HEADS");
    printf("          2.TAILS");

    
    int count = 0;
    for(i=0;i<3;i++){
    	printf("\nEnter your side(1 or 2):");
    scanf("%d",&choice);
    // random results = 0
    // random results = 1
    result = rand()%2;
    
    int i;
    
    for(i=0;i<1;i++){
    	printf("\nflipping coin");
    	fflush(stdout);
    	Sleep(500);
    	printf(".");
    	fflush(stdout);
    	Sleep(500);
    	printf(".");
    	fflush(stdout);
    	Sleep(500);
    	printf(".");
    	fflush(stdout);
    	Sleep(500);
    	printf(".");
    	fflush(stdout);
    	Sleep(500);
    	
	}
	
	if(result == 0){
		printf("\nResult: --->HEADS<---");
	}
	else
	{
		printf("\nResult: -->TAILS<--");
	}
	if(choice==1 && result == 0 || choice == 2 && result==1){
		printf("\n-----YOU WIN-----\n");
		count++;
	}
	else
	{
		printf("\n-----YOU LOSE-----\n");
	}
	
	}
	printf("your score:%d\n",count);
    if(count==2){
		printf("---YOU WIN in best B03---");
	}
	else{
		printf("---OPPONENT WIN in BO3---");
	}
}

    
}
