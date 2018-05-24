#include "check_move.h"
#include <stdio.h>


extern unsigned short int board[8][8];

int check_move_pawn_white(unsigned short int a, unsigned short int b, unsigned short int c, unsigned short int d)
{
	printf("(%u,%u) (%u,%u) ход=(%d)", a, b, c, d, (a-c)); 
	if ((((board[a-1][b-1] == 0) && (a-1 == c)) && ((board[a-1][b-1] == 0) && (b-1 == d))) || ((board[a-1][b+1] == 0 && (a-1 == c)) && 
	(board[a-1][b+1] == 0 && (b+1 == d))) || (board[a-1][b] != 0) || (a < c) || (a == c) || ((a == 6) && ((a-c) > 2)) || ((a < 6) && ((a-c) != 1))){//разделить первое под условие  (b != d)
		printf("------------\n");
		if ((a == c) && (b == d)) {printf("-------3-----\n");
			return -1;
		} else if ((a == c) && (b != d)) {
			printf("Пешка не может так ходить\n");
			return 1;
		}		
		printf("Пешка не может так ходить\n");
		return 1;
	} else if ((b != d) && ((((board[a-1][b-1] == 0) && (a-1 == c)) && ((board[a-1][b-1] == 0) && (b-1 == d))) || ((board[a-1][b+1] == 0 && (a-1 == c)) && 
	(board[a-1][b+1] == 0 && (b+1 == d))))) {
		printf("Пешка не может так ходить\n");
		return 1;
	}

	return 0;
}


int check_move_pawn_black(unsigned short int a, unsigned short int b, unsigned short int c, unsigned short int d)
{
	printf("(%u,%u) (%u,%u) ход=(%d)", a, b, c, d, (c-a)); 
	if ((((board[a+1][b-1] == 0) && (a+1 == c)) && ((board[a+1][b-1] == 0) && (b-1 == d))) || ((board[a+1][b+1] == 0 && (a+1 == c)) && 
	(board[a+1][b+1] == 0 && (b+1 == d))) || (board[a+1][b] != 0) || (a > c) || (a == c) || ((a == 1) && ((c-a) > 2)) || ((a > 1) && ((c-a) != 1))){//разделить первое под условие  (b != d)
		printf("------------\n");
		if ((a == c) && (b == d)) {printf("-------3-----\n");
			return -1;
		} else if ((a == c) && (b != d)) {
			printf("Пешка не может так ходить\n");
			return 1;
		}		
		printf("Пешка не может так ходить\n");
		return 1;
	} else if ((b != d) && ((((board[a+1][b-1] == 0) && (a+1 == c)) && ((board[a+1][b-1] == 0) && (b-1 == d))) || ((board[a+1][b+1] == 0 && (a+1 == c)) && 
	(board[a+1][b+1] == 0 && (b+1 == d))))) {
		printf("Пешка не может так ходить\n");
		return 1;
	}

	return 0;
}
