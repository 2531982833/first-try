#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char flag = 0;
	//一维数组存放游戏信息
	char board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		flag=IsWin(board, ROW, COL);
		if (flag != 'C')
			break;
		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		flag=IsWin(board, ROW, COL);
		if (flag != 'C')
			break;
	}
	if (flag == '*')
	{
		printf("玩家赢\n");
	}
	else if (flag == '#')
	{
		printf("电脑赢\n");
	}
	else printf("平局\n");
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入:\n");
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