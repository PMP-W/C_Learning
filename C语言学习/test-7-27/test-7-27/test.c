#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a % 3 == 0)
		printf("整除，余数为0\n");
	else if (a % 3 == 1)
		printf("余数为1\n");
	else
		printf("余数是2\n");

	return 0;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	switch (num % 3)//num必须为整型            能明确计算出值时用switch语句
	{
	case 0://case+空格+value（整型常量）
		printf("余数是1\n");
		break;
	case 1:
		printf("余数是1\n");
		break;
	case 2:
		printf("余数是2\n");
		break;

	}

	return 0;
}


输入一个1-7的数字，打印对应的星期几
int main()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;

	case 3:
		printf("星期三\n");
		break;

	case 4:
		printf("星期四\n");
		break;

	case 5:
		printf("星期五\n");
		break;

	case 6:
		printf("星期六\n");
		break;

	case 7:
		printf("星期日\n");
		break;

	}

	return 0;



int main()
{
	int day = 0;

	scanf("%d", &day);
	if (day >= 1 && day <= 5)
		printf("工作日\n");
	else
		printf("休息日\n");
	return 0;
}


int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日");
		break;
	case 6:
	case 7:
		printf("休息日");
		break;
	default:
		printf("输入错误，请输入1-7之间的数字\n");
		break;

	}
	return 0;
}



/*int main()
{
	int i = 1;
	while (i >= 1 && i <= 10)
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}*/

/*int main()
{
	int a = 0;
	scanf("%d", &a);
	while (a)
	{
		printf("%d ", a % 10);
		a = a / 10;


	}
	return 0;
}*/


int main()
{
	int num = 1;
	for (num = 1; num <= 10; num++)
		printf("%d ", num);

	return 0;
}


int main()
{
	int a = 1;
	int sum = 0;
	for (a = 1; a <= 100; a++)
	{
	    //判断是否是3的倍数
		if (a % 3 == 0)
			sum += a;

	}
	printf("%d", sum);
	return 0;
}


int main()
{
	int num = 9;
	int i = 0;
	while (num <= 100) {
		
		if ((num - 9) % 10 == 0)
			num += 10;
			i++;
	}
	printf("%d\n", i);


	return 0;
}


打印100-200之间的素数
int main()
{
	int num = 0;
	for (num = 100; num <= 200; num++)
	{
		int i = 0;
		int m = 1;
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				m = 0;
				break;
			}
		}
			if (m == 1)
				printf("%d ", num);

	}
	return 0;
}


 分数求和     1-2+3-4+5-6+7-8
int main()
{
	int num = 1;
	double sum=0.0;
	int a = 1;
	while(num<=100)
	{
		sum += a * 1.0 / num;
		a = -a;
		num++;
	}
	printf("%lf ", sum);

	return 0;
}


计算整数的位数
int main()
{
	int num = 0;
	int i = 0;
	scanf("%d", &num);
	do {
		i++;
		num = num / 10;
		

	} while (num);
	printf("%d", i);

	return 0;
}

求10个整数中的最大值
int main()
{
	int a = 0;
	int max = 0;
	int arr[10];
	
	printf("请输入10个整数：\n");
	for(a=0;a<10;a++)
	{
		scanf("%d", &arr[a]);
	}

	max = arr[0];

	for (a = 1; a < 10; a++)
	{
		if (arr[a] > max)
		{		max = arr[a];
	}
	}
	printf("max=%d", max);
	return 0;
}

输出9*9乘法表
利用循环语句
int main()
{
	int a, b, c = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			c = a * b;
			printf("%d*%d=%d\t", a, b, c);

		}

	}

	return 0;
}

