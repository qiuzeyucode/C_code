#define _CRT_SECURE_NO_WARNINGS
////三十三、   完成   （三子棋）
//#include"game.h"
//void initboard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//void printboard(char board[ROW][COL], int row, int col)
//{	
//	int i = 0;
//	for (i = 0; i < row+1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col+1; j++)
//		{
//			printf("+");
//			if (j < col)
//				printf("---");
//
//		}
//		printf("\n");
//		if (i < row)
//		{
//			for (j = 0; j < col + 1; j++)
//			{
//				printf("|");
//				if (j < col)
//					printf(" %c ", board[i][j]);
//			}
//			printf("\n");
//		}
//	}
//}
//void player(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("玩家走\n");
//	while (1)
//	{
//		printf("请输入坐标:>");
//		scanf("%d%d", &x, &y);
//		if (x <= row && y <= col && x >= 1 && y >= 1)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//				printf("此处已占用，请重新输入\n");
//		}
//		else
//			printf("坐标非法，请重新输入\n");
//	}
//}
//void computer(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("电脑走\n");
//	while (1)
//	{
//		x = rand() % row;
//		y = rand() % col;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//}
//int isfull(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//char judge(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	//横
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//			return board[i][1];
//	}
//	int j = 0;
//	//竖
//	for (j = 0; j < col; j++)
//	{
//		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
//			return board[1][j];
//	}
//	//斜
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//		return board[1][1];
//	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
//		return board[1][1];
//
//	if (isfull(board,row,col))
//	{
//		return 'Q';
//	}
//	return 'C';
//}

//三十四、  完成   （扫雷）
//#include"game.h"
//void initboard(char board[ROWS][COLS], int rows, int cols, char set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			board[i][j] = set;
//		}
//	}
//}
//void printboard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("-----  扫 雷  -----\n");
//	printf("-------------------\n");
//	for (i = 0; i <= row; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d ",i);
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//}
//void setboard(char main[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int x = 0;
//	int y = 0;
//	for (i = 0; i < ccount; i++)
//	{
//		x = rand() % 9 + 1;
//		y = rand() % 9 + 1;
//		main[y][x] = '1';
//	}
//}
//void find(char main[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	while (1)
//	{
//		printf("请输入坐标>:");
//		scanf("%d%d", &x, &y);
//		if (y <= row&&x <= col&&y > 0 && x > 0)
//		{
//			if (main[y][x] == '1')
//			{
//				printf("恭喜你! 炸到了好樊鸭。。。\n");
//				show[y][x] = 'X';
//				printboard(show, ROW, COL);
//				break;
//			}
//			else
//			{
//				judge(main, show, ROW, COL, x, y);
//				printboard(show, ROW, COL);
//				ret = iswin(show, ROW, COL);
//				if (ret == 1)
//				{
//				    printf("很遗憾，没有炸到好樊鸭。。。\n");
//					break;
//				}
//			}
//		}
//		else
//			printf("坐标非法,请重新输入。。。\n");
//	}
//}
//void judge(char main[ROWS][COLS], char show[ROWS][COLS], int row, int col,int x,int y)
//{
//	int x_= x;
//	int y_= y;
//	int sum = 0;
//	for (x= x_ - 1; x <= x_ + 1; x++)
//	{
//		for (y = y_ - 1; y <= y_ + 1; y++)
//		{
//			if (main[y][x] == '1')
//			{
//				sum++;
//			}
//		}
//	}
//	if (sum != 0)
//	{
//		show[y_][x_] = sum+'0';
//	}
//	else
//	{
//		show[y_][x_] = sum + '0';
//		x = x_;
//		y = y_;
//		for (x = x_ - 1; x <= x_ + 1; x++)
//		{
//			for (y = y_ - 1; y <= y_ + 1; y++)
//			{
//				if (y > 0 && y <= row && x > 0 && x <= col)
//				{
//					if (show[y][x] != '*')
//						continue;
//					judge(main, show, ROW, COL, x, y);
//				}
//				else
//					break;//必须break否则会死循环
//			}
//		}
//
//	}
//}
//int iswin(char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	for (y = 1; y <= row; y++)
//	{
//		for (x = 1; x <= col; x++)
//		{
//			if (show[y][x] == '*')
//			{
//				win++;
//			}
//		}
//	}
//	if (win <= ccount)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}

