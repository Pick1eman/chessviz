#define CTEST_MAIN
#include "check_move.h"
#include <stdio.h>
#include <ctype.h>
#include "ctest.h"
#include "board.h"


int board[8][8] = {{ 21, 22, 23, 24, 25, 23, 22, 21 },
								   { 20, 20, 20, 20, 20, 20, 20, 20 },
								   { 0, 0, 0, 0, 0, 0, 0, 0 },
								   { 0, 0, 0, 0, 0, 0, 0, 0 },
								   { 0, 0, 0, 0, 0, 0, 0, 0 },
								   { 0, 0, 0, 0, 0, 0, 0, 0 },
								   { 10, 10, 10, 10, 10, 10, 10, 10 },
								   { 11, 12, 13, 14, 15, 13, 12, 11 }};

CTEST(code_to_letter, correct)
{
	char result = code_to_letter(6, 4);
	char expected = 'P';
	ASSERT_EQUAL_U(expected, result);
}

CTEST(code_to_letter1, correct)
{
	char result = code_to_letter(4, 3);
	char expected = '#';
	ASSERT_EQUAL(expected, result);
}

CTEST(code_to_letter2, correct)
{
	char result = code_to_letter(12, 3);
	char expected = '!';
	ASSERT_EQUAL(expected, result);
}


CTEST(check_move_pawn_white1, correct)
{
	int result = check_move_pawn_white(6, 4, 5, 3);
	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(check_move_pawn_white2, correct)
{
	int result = check_move_pawn_white(6, 4, 5, 4);
	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(check_move_pawn_black1, correct)
{
	int result = check_move_pawn_black(1, 1, 2, 1);
	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(check_move_pawn_black2, correct)
{
	int result = check_move_pawn_black(1, 1, 5, 4);
	int expected = 1;
	ASSERT_EQUAL(expected, result);
}


CTEST(table_1_1, correct)
{
	int result = table_1('e');
	int expected = 4;
	ASSERT_EQUAL(expected, result);
}


CTEST(table_1_2, correct)
{
	int result = table_1('z');
	int expected = -1;
	ASSERT_EQUAL(expected, result);
}


CTEST(table_2_1, correct)
{
	int result = table_2('2');
	int expected = 6;
	ASSERT_EQUAL(expected, result);
}


CTEST(table_2_2, correct)
{
	int result = table_2('9');
	int expected = -1;
	ASSERT_EQUAL(expected, result);
}



int main(int argc, const char** argv)
{
	int test_result = ctest_main(argc, argv);
	return test_result;
}
