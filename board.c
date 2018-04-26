#include <stdio.h>
#include "board.h"

extern unsigned short int board[8][8];

//extern short ch_board[8][8];

char checknum(unsigned short int num_figure)
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
}


char code_to_letter(unsigned short int i1, unsigned short int i2)
{
	char empty = '!';
	if ((i + j)%2 != 0) {
		empty = '#';
	} else {
		empty = ' ';
	}
	
	switch(board[i1][j1]){
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
		case 0:
			return empty;
	}
}


char Ini_cells(unsigned short int i1,unsigned short int j1)
{
	char figure;
	unsigned short int num_figure;
	char move[2];
	/*unsigned short int board[8][8] = {{21, 22, 23, 24, 25, 23, 22, 21},
									  {20, 20, 20, 20, 20, 20, 20, 20},
									  {0, 0, 0, 0, 0, 0, 0, 0},
									  {0, 0, 0, 0, 0, 0, 0, 0},
									  {0, 0, 0, 0, 0, 0, 0, 0},
									  {0, 0, 0, 0, 0, 0, 0, 0},
									  {10, 10, 10, 10, 10, 10, 10, 10},
									  {11, 12, 13, 14, 15, 13, 12, 11}};*/
	num_figure = board[i1][j1];
	if (num_fugure == 21) {
		printf("Введите координату,куда хотите переместить ладью: ");
		scanf("%c %c", &move[0], &move[1]);
		i2 = table_1(move[1]);
		j2 = table_2(move[0]);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 22) {
		printf("Введите координату,куда хотите переместить коня: ");
		scanf("%c %c", &move[0], &move[1]);
		i2 = table_1(move[1]);
		j2 = table_2(move[0]);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 23) {
		printf("Введите координату,куда хотите переместить слона: ");
		scanf("%c %c", &move[0], &move[1]);
		i2 = table_1(move[1]);
		j2 = table_2(move[0]);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 24) {
		printf("Введите координату,куда хотите переместить ферзя: ");
		scanf("%c %c", &move[0], &move[1]);
		i2 = table_1(move[1]);
		j2 = table_2(move[0]);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 25) {
		printf("Введите координату,куда хотите переместить короля: ");
		scanf("%c %c", &move[0], &move[1]);
		i2 = table_1(move[1]);
		j2 = table_2(move[0]);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 20) {
		printf("Введите координату,куда хотите переместить пешку: ");
		scanf("%c %c", &move[0], &move[1]);
		i2 = table_1(move[1]);
		j2 = table_2(move[0]);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 11) {
		printf("Введите координату,куда хотите переместить ладью: ");
		scanf("%c %c", &move[0], &move[1]);
		i2 = table_1(move[1]);
		j2 = table_2(move[0]);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 12) {
		printf("Введите координату,куда хотите переместить коня: ");
		scanf("%c %c", &move[0], &move[1]);
		i2 = table_1(move[1]);
		j2 = table_2(move[0]);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 13) {
		printf("Введите координату,куда хотите переместить слона: ");
		scanf("%c %c", &move[0], &move[1]);
		i2 = table_1(move[1]);
		j2 = table_2(move[0]);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}	if (num_fugure == 14) {
		printf("Введите координату,куда хотите переместить ферзя: ");
		scanf("%c %c", &move[0], &move[1]);
		i2 = table_1(move[1]);
		j2 = table_2(move[0]);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 15) {
		printf("Введите координату,куда хотите переместить короля: ");
		scanf("%c %c", &move[0], &move[1]);
		i2 = table_1(move[1]);
		j2 = table_2(move[0]);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}
		if (num_fugure == 10) {
		printf("Введите координату,куда хотите переместить пешку: ");
		scanf("%c %c", &move[0], &move[1]);
		i2 = table_1(move[1]);
		j2 = table_2(move[0]);
		board[i2][j2] = num_figure;//num_figure = board[i2][j2];
		board[i1][j1] = 0;
		figure = checknum(num_figure);
		return figure;
	}	
	
}


void board_(unsigned short int i1,unsigned short int j1)
{

	char figure; 
	
	
	figure = Ini_cells(i1, j1);//Для перемещения фигуры
	

	
}



void print_board(unsigned short int i1,unsigned short int j1)
{
	int num_figure;
	num_figure = board[i1][j1];
	printf("\n\n");
	printf("    *  | A | B | C | D | E | F | G | H |  *    \n");
	printf("    _   ___ ___ ___ ___ ___ ___ ___ ___   _    \n");
	printf("    8  | %c |#%c#| %c |#%c#| %c |#%c#| %c |#%c#|  8    \n", 
	code_to_letter(0,0), code_to_letter(0,1),code_to_letter(0,2),code_to_letter(0,3),code_to_letter(0,4),code_to_letter(0,5),code_to_letter(0,6),code_to_letter(0,7));
	printf("    _  |___|###|___|###|___|###|___|###|  _    \n");
	printf("    7  |#%c#| %c |#%c#| %c |#%c#| %c |#%c#| %c |  7    \n",
	code_to_letter(1,0), code_to_letter(1,1),code_to_letter(1,2),code_to_letter(1,3),code_to_letter(1,4),code_to_letter(1,5),code_to_letter(1,6),code_to_letter(1,7));
	printf("    _  |###|___|###|___|###|___|###|___|  _    \n");
	printf("    6  | %c |#%c#| %c |#%c#| %c |#%c#| %c |#%c#|  6    \n",
	code_to_letter(2,0), code_to_letter(2,1),code_to_letter(2,2),code_to_letter(2,3),code_to_letter(2,4),code_to_letter(2,5),code_to_letter(2,6),code_to_letter(2,7));
	printf("    _  |___|###|___|###|___|###|___|###|  _    \n");
	printf("    5  |#%c#| %c |#%c#| %c |#%c#| %c |#%c#| %c |  5    \n",
	code_to_letter(3,0), code_to_letter(3,1),code_to_letter(3,2),code_to_letter(3,3),code_to_letter(3,4),code_to_letter(3,5),code_to_letter(3,6),code_to_letter(3,7));
	printf("    _  |###|___|###|___|###|___|###|___|  _    \n");
	printf("    4  | %c |#%c#| %c |#%c#| %c |#%c#| %c |#%c#|  4    \n",
	code_to_letter(4,0), code_to_letter(4,1),code_to_letter(4,2),code_to_letter(4,3),code_to_letter(4,4),code_to_letter(4,5),code_to_letter(4,6),code_to_letter(4,7));
	printf("    _  |___|###|___|###|___|###|___|###|  _    \n");
	printf("    3  |#%c#| %c |#%c#| %c |#%c#| %c |#%c#| %c |  3    \n",
	code_to_letter(5,0), code_to_letter(5,1),code_to_letter(5,2),code_to_letter(5,3),code_to_letter(5,4),code_to_letter(5,5),code_to_letter(5,6),code_to_letter(5,7));
	printf("    _  |###|___|###|___|###|___|###|___|  _    \n");
	printf("    2  | %c |#%c#| %c |#%c#| %c |#%c#| %c |#%c#|  2    \n",
	code_to_letter(6,0), code_to_letter(6,1),code_to_letter(6,2),code_to_letter(6,3),code_to_letter(6,4),code_to_letter(6,5),code_to_letter(6,6),code_to_letter(6,7));
	printf("    _  |___|###|___|###|___|###|___|###|  _    \n");
	printf("    1  |#%c#| %c |#%c#| %c |#%c#| %c |#%c#| %c |  1    \n",
	code_to_letter(7,0), code_to_letter(7,1),code_to_letter(7,2),code_to_letter(7,3),code_to_letter(7,4),code_to_letter(7,5),code_to_letter(7,6),code_to_letter(7,7));
	printf("    _  |###|___|###|___|###|___|###|___|  _    \n");
	printf("                                               \n");
	printf("    *  | A | B | C | D | E | F | G | H |  *    \n");
	printf("\n\n");
	
}

unsigned short int table_1(char *a)//Преобразование символа в число
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
		}
}
	
	
	
	
unsigned short int table_2(char *b)//Преобразование символа в число
{	
		switch(*b){
		case '1':
			return 7;
		case '2':
			return 6;
		case '3':
			return 5;
		case '4':
			return 4;
		case '5':
			return 3;
		case '6':
			return 2;
		case '7':
			return 1;
		case '8':
			return 0;
		}
}
