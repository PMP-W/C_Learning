#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{

	printf("********************\n");
	printf("********************\n");
	printf("**** 1.��ʼ��Ϸ ****\n");
	printf("**** 0.�˳���Ϸ ****\n");
	printf("********************\n");
	printf("********************\n");

}
void game()
{
	char mine[ROWS][COLS];//��Ų����׵���Ϣ
	char show[ROWS][COLS];//����Ų�����׵���Ϣ
	//��ʼ������
	//1. mine���鿪ʼȫ�ǡ�0��
	//2. show���鿪ʼȫ�ǡ�*��
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//��ӡ����
	Displayboard(show, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	//�Ų���
    Findmine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("------ɨ����Ϸ------\n");
		printf("�����룺");
		scanf("%d", &input);
		
	    switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf( "�˳���Ϸ\n" );
			break;
		default:
			break;
		}
		printf("------ɨ����Ϸ------\n");
	} while (input);
	

	return 0;
}