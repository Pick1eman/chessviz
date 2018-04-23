#include <stdio.h>
#include "board.h"



int main()
{
	printf("Добро пожаловать в шахматы. Введите '1' если хотите играть, если хотите отменить игру, введите любое число\n");
	int i, j;
	int a;
	char move[4] = {'0', '0', '0', '0'};
	scanf("%d", &a);
	while (a == 1) {
		printf("Введите ход фигуры %c %c %c %c", &move[0], &move[1], &move[2], &move[3]);
		i = table_1(move[0]);
		j = table_2(move[1]);
		//board(i, j);
		printf("Для продолжения введите '1' если хотите играть,если хотите отменить игру, введите любое число");
		scanf("%d", &a);
	}
	return 0;
}
