#include <stdio.h>
#include "board.h"

unsigned short int board[8][8] = {{21, 22, 23, 24, 25, 23, 22, 21},
								  {20, 20, 20, 20, 20, 20, 20, 20},
								  {0, 0, 0, 0, 0, 0, 0, 0},
								  {0, 0, 0, 0, 0, 0, 0, 0},
								  {0, 0, 0, 0, 0, 0, 0, 0},
								  {0, 0, 0, 0, 0, 0, 0, 0},
								  {10, 10, 10, 10, 10, 10, 10, 10},
								  {11, 12, 13, 14, 15, 13, 12, 11}};

//short ch_board[8][8] = {{'r'

int main()
{
	printf("Добро пожаловать в шахматы. Введите '1' если хотите играть, если хотите отменить игру, введите любое число\n");
	unsigned short int i1, j1;
	int a;
	char move[2] = {'0', '0'};
	scanf("%d", &a);
	while (a == 1) {
		printf("Выберите фигуру\n");
		scanf("%c", &move[1]);
		scanf("%c", &move[0]);
		i1 = table_1(move[0]);//Преобразование символа в число
		j1 = table_2(move[1]);//Преобразование символа в число
		board_(i1, j1)//Вызов основной функции
		printf("Для продолжения введите '1' если хотите играть,если хотите отменить игру, введите любое число");
		scanf("%d", &a);
	}
	return 0;
}
