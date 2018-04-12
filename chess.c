#include <stdio.h>

int main()
{	
	/*
	none = 0
	
	wp = 10
	wr = 11
	wn = 12
	wb = 13
	wq = 14
	wk = 15
	
	bp = 20
	br = 21
	bn = 22
	bb = 23
	bq = 24
	bk = 25
	*/
	
	char move[4] = {'e', '2', 'e', '4'};
	unsigned short int board[8][8] = {{21, 22, 23, 24, 25, 23, 22, 21},
									  {20},
									  {0},
									  {0},
									  {0},
									  {0},
									  {10},
									  {11, 12, 13, 14, 15, 13, 12, 11}};
	
	printf("\n\n");
	printf("    *  | A | B | C | D | E | F | G | H |  *    \n");
	printf("    _   ___ ___ ___ ___ ___ ___ ___ ___   _    \n");
	printf("    8  | r |#n#| b |#q#| k |#b#| n |#r#|  8    \n");
	printf("    _  |___|###|___|###|___|###|___|###|  _    \n");
	printf("    7  |#p#| p |#p#| p |#p#| p |#p#| p |  7    \n");
	printf("    _  |###|___|###|___|###|___|###|___|  _    \n");
	printf("    6  |   |###|   |###|   |###|   |###|  6    \n");
	printf("    _  |___|###|___|###|___|###|___|###|  _    \n");
	printf("    5  |###|   |###|   |###|   |###|   |  5    \n");
	printf("    _  |###|___|###|___|###|___|###|___|  _    \n");
	printf("    4  |   |###|   |###|   |###|   |###|  4    \n");
	printf("    _  |___|###|___|###|___|###|___|###|  _    \n");
	printf("    3  |###|   |###|   |###|   |###|   |  3    \n");
	printf("    _  |###|___|###|___|###|___|###|___|  _    \n");
	printf("    2  | P |#P#| P |#P#| P |#P#| P |#P#|  2    \n");
	printf("    _  |___|###|___|###|___|###|___|###|  _    \n");
	printf("    1  |#R#| N |#B#| Q |#K#| B |#N#| R |  1    \n");
	printf("    _  |###|___|###|___|###|___|###|___|  _    \n");
	printf("                                               \n");
	printf("    *  | A | B | C | D | E | F | G | H |  *    \n");
	printf("\n\n");
	
	while(1) {
		printf ("Choose position of figure:\n");
		move[0] = getche();
		while (((move[0] > 'z') || (move[0] < 'a')) && ((move[0] > 'Z') || (move[0] < 'A'))) {
			printf ("Invalid value! Try again:\n");
			move[0] = getche();
		}
		move[1] = getche();
		while ((move[1] > '9') || (move[1] < '1')) {
			printf ("Invalid value! Try again:\n");
			move[1] = getche();
		}
		printf ("Choose new position of figure:\n");
		move[2] = getche();
		while (((move[2] > 'z') || (move[2] < 'a')) && ((move[2] > 'Z') || (move[2] < 'A'))) {
			printf ("Invalid value! Try again:\n");
			move[2] = getche();
		}
		move[3] = getche();
		while ((move[3] > '9') || (move[3] < '1')) {
			printf ("Invalid value! Try again:\n");
			move[3] = getche();
		}
	}
	
	
	
	return 0;
}
