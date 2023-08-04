#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//��ʼ������
void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j]= set;
		}
	}

}
//��ӡ����
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1	; j < col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
//������
void Setmine(char board[ROWS][COLS], int row, int col)
{
	//����10����
	//�������
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		
		if (board[x][y] = '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int Getminecount(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x+1][y]+
		mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');

}
//�Ų���
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("���������꣺");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�޶��ķ�Χ������bug
		{
			if (mine[x][y] == '1')                  //=��==��Ҫ�����ˣ����������Է��ִ���
			{
				printf("��Ϸʧ��\n");
				Displayboard(mine, ROW, COL);

				break;
			}
			else
			{
				//�˴����ף�ͳ�Ƹô���Χ�м�����
				int count = Getminecount(mine, x, y);
				show[x][y] = count + '0';
				Displayboard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("�Ƿ����룬����������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		Displayboard(mine, ROW, COL);
	}
}
