#define _CRT_SECURE_NO_WARNINGS 1
//柔性数组
//#include<stdio.h>
//struct st_type
//{
//    int i;
//    int* a;
//};
//
//int main()
//{
//    struct st_type* p = (struct st_type*)malloc(sizeof(struct st_type));
//    if (p == NULL)
//    {
//        perror("malloc\n");
//        return 1;
//    }
//    p->i = 100;
//    p->a = malloc(10 * sizeof(int));
//    if (p->a == NULL)
//    {
//        perror("malloc");
//        return 1;
//    }
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        p->a[i] = i;
//    }
//
//    //希望a指向的空间是15 个整型
//    //struct st_type* ptr = (struct st_type*)realloc(p->a, 15 * sizeof(int));//错误的
//    //应该改为下面代码：
//    int* ptr = (int*)realloc(p->a, 15 * sizeof(int));
//    if (ptr == NULL)
//    {
//        perror("realloc");
//        return 1;
//    }
//    else
//    {
//        //p = ptr;//错误的
//        //应该改为：
//        p->a = ptr;
//        ptr = NULL;
//    }
//    //使用
//
//
//    //释放
//    free(p->a);
//    p->a = NULL;
//    free(p);
//    p = NULL;
//
//    return 0;
//}

//malloc,calloc,realloc,free的使用
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* num = (int*)malloc(sizeof(int) * 20);
//	int* p = (int*)calloc(4, sizeof(int));
//
//	if (num == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	if (p != NULL)
//	{
//		for (i = 0; i < 4; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		printf("\n");
//
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		num[i] = i;
//		printf("%d ", num[i]);
//	}
//	int* nums = NULL;
//	nums = (int*)realloc(num,sizeof(int) * 100);
//	if (nums == NULL)
//	{
//		perror("realloc");
//		return 1;
//	}
//	else
//	{
//		num = nums;
//		nums = NULL;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		*(num+i) = i;
//		printf("%d ", *(num+i));
//	}
//	free(num);
//	free(p);
//	p = NULL;
//	num = NULL;
//	return 0;
//}


//使用malloc函数模拟开辟一个二维数组   arr[i][j]=*(*(arr+i)+j)
//3*5,开辟好后，使用二维数组的下标访问形式，访问空间。

//    1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int** p = (int**)malloc(sizeof(int*) * 3);
	int i = 0; 
	if (p != NULL)//使用前验证
	{
		for (i = 0; i < 3; i++)
		{
			*(p + i) = (int*)malloc(sizeof(int) * 5);
		}
		for (i = 0; i < 3; i++)
		{
			int j = 0;
			for (j = 0; j < 5; j++)
			{
				scanf("%d", &p[i][j]);
			}
		}

		for (i = 0; i < 3; i++)
		{
			int j = 0;
			for (j = 0; j < 5; j++)
			{
				printf("%d ", p[i][j]);

			}
			printf("\n");
		}
	}
	for (i = 0; i < 3; i++)
	{
		free(p[i]);//必须释放
	}
	free(p);
	p = NULL;

	return 0;
}
//#include <stdio.h>
//
//
//int main()
//{
//	//开辟
//	int** p = (int**)malloc(3 * sizeof(int*));
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		p[i] = (int*)malloc(5 * sizeof(int));
//	}
//	//使用
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			p[i][j] = 5 * i + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		free(p[i]);
//	}
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}

//   2
int main()
{
	int(*p)[5] = (int(*)[5])malloc(3 * 5 * sizeof(int));
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; i < 5; j++)
		{
			p[i][j] = 1;
		}
	}
	free(p);
	return 0;
}
