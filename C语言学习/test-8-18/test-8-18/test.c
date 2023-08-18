#define _CRT_SECURE_NO_WARNINGS 1
//二进制位不同的个数
//#include <stdio.h>
//
//int main() {
//    int a, b, c;
//    int count = 0;
//    scanf("%d%d", &a, &b);
//    c = a ^ b;
//    while (c)
//    {
//        if ((c & 1) == 1)
//            count++;
//        c = c >> 1;
//    }
//
//    printf("%d", count);
//    return 0;
//}

//打印整数二进制的奇数位和偶数位
#include<stdio.h>
int main()//0000 1010
{
	int num = 0;
	scanf("%d", &num);
	int ret = num;
	while (num)
	{
		printf("%d", num & 1);
		num = num >> 2;
	}
	num = ret;

	printf("\n");
	num = num >> 1;
	while (num)
	{
		printf("%d", num & 1);
		num = num >> 2;
	}
	return 0;
}