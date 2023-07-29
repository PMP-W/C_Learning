#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏
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
//生成随机数
	int r=rand() % 100 + 1;
//猜数字
	//限制猜数字的次数
	int count = 5;
	printf("请猜数字：\n");
	while (count) {
		printf("你还有%d次机会\n", count);
		scanf("%d", &guess);

		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else {
			printf("恭喜你，猜对了\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("猜数字失败，正确答案是:%d\n",r);

	}


}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//不需要频繁调用

	do {
		
		//打印菜单
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;

		}
				
	} while (input);
	return 0;
}