#define _CRT_SECURE_NO_WARNINGS 1
//��������Ϸ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu() 
{
	printf("***************************\n");
	printf("*********  1.play *********\n");
	printf("*********  0.exit *********\n");
	printf("***************************\n");
}
void game()
{
	int guess = 0;
//���������
	int r=rand() % 100 + 1;
//������
	//���Ʋ����ֵĴ���
	int count = 5;
	printf("������֣�\n");
	while (count) {
		printf("�㻹��%d�λ���\n", count);
		scanf("%d", &guess);

		if (guess > r)
		{
			printf("�´���\n");
		}
		else if (guess < r)
		{
			printf("��С��\n");
		}
		else {
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("������ʧ�ܣ���ȷ����:%d\n",r);

	}


}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//����ҪƵ������

	do {
		
		//��ӡ�˵�
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;

		}
				
	} while (input);
	return 0;
}