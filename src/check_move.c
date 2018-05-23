#include "check_move.h"
#include <stdio.h>


extern unsigned short int board[8][8];

int check_move_pawn_white(unsigned short int a, unsigned short int b, unsigned short int c, unsigned short int d)
{
	printf("(%u,%u) (%u,%u) ход=(%d)", a, b, c, d, (a-c)); 
	if ((b != d) || (((board[a-1][b-1] == 0) && (a-1 == c)) && ((board[a-1][b-1] == 0) && (b-1 == d))) || ((board[a-1][b+1] == 0 && (a-1 == c)) && (board[a-1][b+1] == 0 && (b+1 == d))) || (board[a-1][b] != 0) || (a < c) || (a == c)){//разделить первое под условие  (b != d)
		printf("------------\n");
		if ((a == 6) && ((a-c) > 2)) {printf("----1--------\n");
			printf("Пешка не может так ходить\n");
			return 1;
		} else if ((a < 6) && ((a-c) != 1)) {printf("---2---------\n");
			printf("Пешка не может так ходить\n");
			return 1;
		} else if (a == c) {printf("-------3-----\n");
			return -1;
		}
	}

	return 0;
}
