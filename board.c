#include <stdio.h>
#include "board.h"

char checknum(int num_figure)
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
	//char figure;
	switch(num_figure){
		case 21:
			return 'r';
		case 22:
			return 'n';
		case 23:
			return 'b';
		case 24:
			return 'q';
		case 25:
			return 'k';
		case 20:
			return 'p';
		case 10:
			return 'P';
		case 11:
			return 'R';
		case 12:
			return 'N';
		case 13:
			return 'B';
		case 14:
			return 'Q';
		case 15:
			return 'K';
	}




char Ini_cells(int i1, int j1)
{
	char figure;
	int num_figure;
	int i2, j2;
	/*unsigned short int board[8][8] = {{21, 22, 23, 24, 25, 23, 22, 21},
									  {20},
									  {0},
									  {0},
									  {0},
									  {0},
									  {10},
									  {11, 12, 13, 14, 15, 13, 12, 11}};*/
	num_figure = board[i1][j1];
	if (num_fugure == 21) {
		printf("Введите координату,куда хотите переместить ладью: ");
		scanf("%d %d", &i2, &j2);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 22) {
		printf("Введите координату,куда хотите переместить коня: ");
		scanf("%d %d", &i2, &j2);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 23) {
		printf("Введите координату,куда хотите переместить слона: ");
		scanf("%d %d", &i2, &j2);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 24) {
		printf("Введите координату,куда хотите переместить ферзя: ");
		scanf("%d %d", &i2, &j2);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 25) {
		printf("Введите координату,куда хотите переместить короля: ");
		scanf("%d %d", &i2, &j2);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 20) {
		printf("Введите координату,куда хотите переместить пешку: ");
		scanf("%d %d", &i2, &j2);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 11) {
		printf("Введите координату,куда хотите переместить ладью: ");
		scanf("%d %d", &i2, &j2);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 12) {
		printf("Введите координату,куда хотите переместить коня: ");
		scanf("%d %d", &i2, &j2);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 13) {
		printf("Введите координату,куда хотите переместить слона: ");
		scanf("%d %d", &i2, &j2);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}	if (num_fugure == 14) {
		printf("Введите координату,куда хотите переместить ферзя: ");
		scanf("%d %d", &i2, &j2);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 15) {
		printf("Введите координату,куда хотите переместить короля: ");
		scanf("%d %d", &i2, &j2);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 10) {
		printf("Введите координату,куда хотите переместить пешку: ");
		scanf("%d %d", &i2, &j2);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}	
	
}


void board()
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
	char figure; 
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
	printf("    8  | %c |#%c#| %c |#%c#| %c |#%c#| %c |#%c#|  8    \n");
	printf("    _  |___|###|___|###|___|###|___|###|  _    \n");
	printf("    7  |#%c#| %c |#%c#| %c |#%c#| %c |#%c#| %c |  7    \n");
	printf("    _  |###|___|###|___|###|___|###|___|  _    \n");
	printf("    6  | %c |#%c#| %c |#%c#| %c |#%c#| %c |#%c#|  6    \n");
	printf("    _  |___|###|___|###|___|###|___|###|  _    \n");
	printf("    5  |#%c#| %c |#%c#| %c |#%c#| %c |#%c#| %c |  5    \n");
	printf("    _  |###|___|###|___|###|___|###|___|  _    \n");
	printf("    4  | %c |#%c#| %c |#%c#| %c |#%c#| %c |#%c#|  4    \n");
	printf("    _  |___|###|___|###|___|###|___|###|  _    \n");
	printf("    3  |#%c#| %c |#%c#| %c |#%c#| %c |#%c#| %c |  3    \n");
	printf("    _  |###|___|###|___|###|___|###|___|  _    \n");
	printf("    2  | %c |#%c#| %c |#%c#| %c |#%c#| %c |#%c#|  2    \n");
	printf("    _  |___|###|___|###|___|###|___|###|  _    \n");
	printf("    1  |#%c#| %c |#%c#| %c |#%c#| %c |#%c#| %c |  1    \n");
	printf("    _  |###|___|###|___|###|___|###|___|  _    \n");
	printf("                                               \n");
	printf("    *  | A | B | C | D | E | F | G | H |  *    \n");
	printf("\n\n");
	
}

int table_1(char *a)
{
		switch(*a){
		case 'a':
			return 0;
		case 'b':
			return 1;
		case 'c':
			return 2;
		case 'd':
			return 3;
		case 'e':
			return 4;
		case 'f':
			return 5;
		case 'g':
			return 6;
		case 'h':
			return 7;
		{
	}
	
	
	
	
int table_2(char *b)
{	
		switch(*b){
		case '1':
			return 0;
		case '2':
			return 1;
		case '3':
			return 2;
		case '4':
			return 3;
		case '5':
			return 4;
		case '6':
			return 5;
		case '7':
			return 6;
		case '8':
			return 7;
		}
}
