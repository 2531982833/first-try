#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char flag = 0;
	//һά��������Ϸ��Ϣ
	char board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		flag=IsWin(board, ROW, COL);
		if (flag != 'C')
			break;
		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		flag=IsWin(board, ROW, COL);
		if (flag != 'C')
			break;
	}
	if (flag == '*')
	{
		printf("���Ӯ\n");
	}
	else if (flag == '#')
	{
		printf("����Ӯ\n");
	}
	else printf("ƽ��\n");
}
void menu()
{
	printf("******************************\n");
	printf("*******1.play    0.exit*******\n");
	printf("******************************\n");
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������:\n");
			break;
		}
	} while (input);
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}