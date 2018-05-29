#define CTEST_MAIN

#include <stdio.h>
#include <ctype.h>
#include "ctest.h"
#include "board.h"


unsigned short int board[8][8] = {{ 21, 22, 23, 24, 25, 23, 22, 21 },
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
	ASSERT_EQUAL(expected, result);
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

CTEST(check_pawn1, correct)
{
	char result = code_to_letter(4, 3);
	char expected = '#';
	ASSERT_EQUAL(expected, result);
}








int main(int argc, const char** argv)
{
	int test_result = ctest_main(argc, argv);
	return test_result;
}
