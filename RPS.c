#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
rock = r
scissors = s
paper = p
*/ 



//	DECLARING A FUNCTION THST WILL START THE GAME
int game(char you, char computer)

{
	  // If both the user and computer
    // has chose the same thing
	if (you == computer)
		return -1;

    // If user's choice is rock and
    // computer's choice is paper
	if (you == 'r' && computer == 'p')
		return 0;

		// If user's choice is paper and
		// computer's choice is rock
	else if (you == 'p' && computer == 'r')
		return 1;

		// If user's choice is rock and
    // computer's choice is scissor
	if (you == 'r' && computer == 's') 
		return 1;

		// If user's choice is scissor and
    // computer's choice is rock
	else if (you == 's' && computer == 'r')
		return 0;

		// If user's choice is paper and
    // computer's choice is scissor
	if (you == 'p' && computer == 's')
		return 0;

		// If user's choice is scissor and
    // computer's choice is paper
	else if (you == 's' && computer =='p' )
		return 1;
}


//DECLARING THE MAIN FUCTION

int main()

{
	int n;

	char you, computer, result;

	srand(time(NULL));

	n = rand() % 100;

    //GIVING EACH OF THE 3 OPTIONS(R,P,S) A 33.3% CHANCE OF BEING CALLED BY THE COMPUTER
	if (n < 33)
		computer = 'r';


	else if ( n > 33 && n <66)
		computer = 'p';

	else
		computer = 's';

	printf("Enter 'r' for rock, enter 'p' for paper, enter 's' for scissors ");
	
	//TAKING USER INPUT
	scanf("%c", &you);
	result = (you, computer);

	result = game(you, computer);

	if (result == -1){
		printf("ITS A DRAW!!!\n");
	}
	else if (result == 1){

		printf("YOU WON!!!\n");
	}

	else{

		printf("YOU LOST!!!\n");
	}
 
    printf("You chose:%c and computer chose:%c\n" , you, computer);
    
    //returning 0 for the main function
	return 0;
}
