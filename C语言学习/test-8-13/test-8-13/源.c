#define   _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#define Height 10
//int calculate(int Long, int Width);
//int main()
//{
//	int m_Long=0;
//	int m_Width;
//	int result;
//
//	printf("长方形的高度为：%d\n", Height);
//	while (1) {
//
//		printf("请输入长度\n");
//		scanf_s("%d", &m_Long);
//
//		printf("请输入宽度\n");
//		scanf("%d", &m_Width);
//
//		result = calculate(m_Long, m_Width);
//		printf("长方体的体积是;");
//		printf("%d\n", result);
//	}
//	return 0;
//}
//
//		int calculate(int Long,int Width)
//{
//			int result = Long * Width * Height;
//			return result;
//}

//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	printf("%d", num1 + num2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float a = 0.0;
//	float b = 0.0;
//	float x = 0.0;
//	scanf("%f %f", &a, &b);
//	x = (3.5/11 * a) + (7.5/11 * b);
//	printf("MEDIA=%.5lf", x);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int h; // 井的深度
//    int n; // 天数
//    int q[10000]; // 白天上爬距离
//    int p[10000]; // 晚上下滑距离
//
//    scanf("%d %d", &h, &n);
//
//     //输入每天的上爬距离和下滑距离
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &q[i]);
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &p[i]);
//    }
//
//    int height = 0; // 当前高度
//
//    for (int i = 1; i <= n; i++) {
//        height += q[i]; 
//
//        if (height >= h) {
//            printf("yes %d\n",n); 
//            return 0;
//        }
//
//        height -= p[i]; 
//
//        if (height <= 0) {
//            printf("no\n");
//            return 0;
//        }
//    }
//
//    printf("no\n");
//
//    return 0;
//}


//#include<stdio.h>

//int main()
//{
//
//	int i = 1;
//	int arr[1000];
//	while (getchar() != '\n')
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	printf("%d", i);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i,j,m;
//	int n = 0;
//	scanf("%d", n);
//	int arr[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		m *= 2;
//	}
//	for()
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    char arr1[10], arr2[10];
//    int i = 0;
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//    for (i = 0; i < sz; i++)
//    {
//        scanf("%c ", &arr1[i]);
//    }
//    for (i = sz - 1; i >= 0; i--)
//    {
//        arr2[i] = arr1[i];
//
//        printf("%c ", arr2[i]);
//    }
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[1000] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	int difference = max - min;
//	printf("%d",difference);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = '0';
//	scanf("%c", &a);
//	printf("%d", a);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int q[100] = { 0 };
//	int sum = 0;
//
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &q[i]);
//		sum += q[i];
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int nums[1000] = { 0 };
//
//	return 0;
//}


#include<stdio.h>
int main()
{
	int arr[1000] = { 0 };
	int i = 0;
	int target = 0;
	while (getchar() != '\n')
	{
		scanf("%d", &arr[i]);
		i++;
	}
	int n = i;
	scanf("%d", &target);
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
		{
			if ((arr[i] + arr[j]) == target)
				printf("%d %d", i, j);
		}
	}

	return 0;
}