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
	char mine[Rows][Cols] = { 0 };//�����׵�����
	char show[Rows][Cols] = { 0 };//�Ų��׵�����
	//��ʼ������ mine���ײ���Ϊ0 showδ�Ų�ĵط�����*
	initboard(mine, Rows, Cols, '0');
	initboard(show, Rows, Cols, '*');

	//������
	setmine(mine, Row, Col);

	display(mine,Row,Col);
	display(show, Row, Col);
	
	//�Ų��� �������
	
	findmine(mine, show, Row, Col);
	
	
	//�ж���Ӯ
		//win(show);




}
int main()
{
	int input = 0;
	//������������������
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;



		}


	} while (input);
	return 0;
}
