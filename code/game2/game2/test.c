#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("*********************\n");
	printf("*****1.  play   *****\n");
	printf("*****0.  exit   *****\n");
	printf("*********************\n");

}

void game()
{
	char mine[Rows][Cols] = { 0 };//布置雷的数组
	char show[Rows][Cols] = { 0 };//排查雷的数组
	//初始化棋盘 mine无雷布置为0 show未排查的地方记作*
	initboard(mine, Rows, Cols, '0');
	initboard(show, Rows, Cols, '*');

	//设置雷
	setmine(mine, Row, Col);

	display(mine,Row,Col);
	display(show, Row, Col);
	
	//排查雷 标兵出列
	
	findmine(mine, show, Row, Col);
	
	
	//判断输赢
		//win(show);




}
int main()
{
	int input = 0;
	//设置随机数的生成起点
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;



		}


	} while (input);
	return 0;
}
