// C program for the above approach
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to implement the game
int game(char you, char computer)
{
	// If both the user and computer
	// has choose the same thing
	if (you == computer)
		return -1;

	// If user's choice is stone and
	// computer's choice is paper
	if (you == 's' && computer == 'p')
		return 0;

			// If user's choice is paper and
			// computer's choice is stone
			else if (you == 'p' && computer == 's') return 1;

	// If user's choice is stone and
	// computer's choice is scissor
	if (you == 's' && computer == 'z')
		return 1;

	// If user's choice is scissor and
	// computer's choice is stone
	else if (you == 'z' && computer == 's')
		return 0;

	// If user's choice is paper and
	// computer's choice is scissor
	if (you == 'p' && computer == 'z')
		return 0;

	// If user's choice is scissor and
	// computer's choice is paper
	else if (you == 'z' && computer == 'p')
		return 1;
}

// Driver Code
int main()
{
	// Stores the random number
	int n;

	char you, computer, result;

	// Chooses the random number
	// every time
	srand(time(NULL));

	// Make the random number less
	// than 10, divided it by 10
	n = rand() % 10;

	// Using simple probability 10 is
	// roughly divided among stone,
	// paper, and scissor
	if (n < 3)

		// s is denoting Stone
		computer = 's';

	else if (n >= 3 && n <= 6)

		// p is denoting Paper
		computer = 'p';

	// z is denoting Scissor
	else
		computer = 'z';

	printf("Enter (S): for STONE, (P): for PAPER and (Z): for SCISSOR\n");

	// input from the user
	scanf("%c", &you);

	// Function Call to play the game
	result = game(you, computer);

	if (result == -1) {
		printf("\nGame Draw!\n");
	}
	else if (result == 1) {
		printf("\tWow! You have won the game!\n");
	}
	else { 
		printf("\nOh! You have lost the game!\n");
	}
		printf ("you choose : %c and Computer choose : %c\n",you, computer);

	return 0;
}

