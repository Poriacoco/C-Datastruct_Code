#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void initboard(char board[Rows][Cols], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}

void display(char board[Rows][Cols], int row, int col)
{
	int i = 0;
	printf("----ɨ����Ϸ----\n");
	//��--
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);

	}
	printf("\n");
	for (i = 0; i <= row; i++)
	{
		printf("--");
	}
	printf("\n");
	//

	for (i = 1; i <= row; i++)
	{
		printf("%d|", i);

		int j = 0;
		for (j = 1; j <= col; j++)  
		{
	
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char board[Rows][Cols], int row, int col)
{
	int count = Easy_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}

	}
}
void findmine(char mine[Rows][Cols], char show[Rows][Cols], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("ѡ���Ų������λ��");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= row)
		{
			if (mine[x][y] == '1')
			{
				printf("������\n");
				display(mine, Row, Col);

				break;
			}
			else
			{
				show[x][y] = sumbow(mine, x, y) + '0';
				display(show, Row, Col);
				unfold(mine, show, Row, Col,x,y);
				//�������
				/*do
				{
					printf("�Ƿ���Ҫ�����1.��Ҫ or 0.����\n");
					int input = 0;
					scanf("%d", &input);
					while (input)
					{
						detect(mine, show, row, col);
						if (detect(mine, show, row, col) == 0)
							break;
					}
				} while (detect(mine, show, row, col));
			}
		}
		else
			printf("��������");*/

			}
		}
	}
}

int sumbow(char board[Rows][Cols], int x, int y)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (board[x + i][y + j] == '1')
			{
				sum++;
			}
		}
	}
	return sum;
}

//�Ų�ʧ�ܷ���0;�Ų�ɹ�����1
//int detect(char mine[Rows][Cols], char show[Rows][Cols], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	again:
//	printf("ѡ���ɳ����������λ��");
//	scanf("%d %d", &i, &j);
//	if (i >= 1 && i <= row && j >= 1 && j <= row)
//	{
//		if (mine[i][j] == '0')
//		{
//			printf("�������ʧ��ɨ������ʧ��\n");
//			display(mine, Row, Col);
//			return 0;
//		}
//
//		else
//		{
//			show[i][j] = '@';
//			display(show, Row, Col);
//			return 1;
//		}
//	}
//	else
//	{
//		printf("��������");
//		goto again;
//	}
//
//}
void unfold(char mine[Rows][Cols], char show[Rows][Cols], int row, int col,int x,int y)
{
	while(sumbow(mine, x, y)==0)
		
}