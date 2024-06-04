#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Row 9
#define Col 9

#define Rows Row+2
#define Cols Col+2

#define Easy_count 10

void initboard(char board[Rows][Cols], int rows, int cols, char set);
void display(char mine[Rows][Cols], int row, int col);
void setmine(char mine[Rows][Cols], int row, int col);
void findmine(char mine[Rows][Cols], char show[Rows][Cols], int row, int col);
int sumbow(char board[Rows][Cols], int x, int y);
//int detect(char mine[Rows][Cols], char show[Rows][Cols], int row, int col);
void unfold(char mine[Rows][Cols], char show[Rows][Cols], int row, int col,int x,int y);