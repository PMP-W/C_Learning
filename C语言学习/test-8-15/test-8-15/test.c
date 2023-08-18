#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int h = 0;//井的深度
//	int n = 0;//天数
//	int i = 0;
//
//	scanf("%d %d", &h, &n);
//	int q[1000] = { 0 };//白天爬的距离
//	int p[1000] = { 0 };//晚上滑的距离
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &q[i]);
//		scanf("%d", &p[i]);
//	}
//	int height = 0;//所在高度
//	for (i = 0; i < n; i++)
//	{
//		height += q[i];
//		if (height >= h)
//		{
//			printf("yes %d", n);
//			return 0;
//		}
//		height -= p[i];
//		if (height < h)
//		{
//			printf("no");
//			return 0;
//		}
//    }
//	return 0;
//}
#include<stdio.h>
#define year_day 365
#define year_month 12

//输出该日期星期几
int day_of_week(int year, int month, int day)
{
	int sum = 0;
	sum=(year-1)*year_day+
}

int main()
{
	int year, month, day;
	int sum = 0;
	scanf("%d%d%d", &year, &month, &day);
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
	{
		if (day > 31)
			printf("%d-%d-%d is Non-existent", year, month, day);
		else

	}
	if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			if (day > 29)
				printf("%d-%d-%d is Non-existent", year, month, day);
		}
		else
			if (day > 28)
				printf("%d-%d-%d is Non-existent", year, month, day);
	}
	return 0;
}