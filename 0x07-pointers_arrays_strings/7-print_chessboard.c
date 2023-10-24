#include "main.h"
/**
 * print_chessboard- prints chessboard
 * @a:chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
int row;
int column;
for (row = 0; a[row][7]; row++)
{
_putchar(a[row][column]);
_putchar('\n');
}
}
