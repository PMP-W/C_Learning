#define _CRT_SECURE_NO_WARNINGS 1
打印1 - 100之间所有3的倍数
#include<stdio.h>
int main()
{
	int a = 3;
	while (a <= 100)
	{
		if (a % 3 == 0)
			printf("%d ", a);
		a++;


	}

	return 0;
}

将三个整数按照从大到小的顺序输出
a, b, c       a, c, b  b, c, a  b, a, c  c, a, b, c, b, a
#include<stdio.h>
int main()
{
	int a, b, c;
	a = 0;
	b = 0;
	c = 0;

	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (b > c)
			printf("%d %d %d", a, b, c);
		if (c > a)
			printf("%d %d %d", c, a, b);

	}
	else if (b > a)
	{
		if (a > c)
			printf("%d %d %d", b, a, c);
		if (c > b)
			printf("%d %d %d", c, b, a);

	}
	else if (a > c > b)
		printf("%d %d %d", a, c, b);
	else
		printf("%d %d %d", b, c, a);

	return 0;
}


/*#include <stdio.h>

int main() {
	int a, b, c, max, min;
	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}

	if (c > max) {
		max = c;
	}

	if (min > c) {
		min = c;
	}

	b = a + b + c - max - min;
	c = min;
	a = max;

	printf("从大到小排序：%d %d %d\n", a, b, c);

	return 0;
}*/






#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;//a=a+1,c=a
	b = ++c, c++, ++a, a++;//b=c+1,c=c+1,a=a+1,a=a+1             前置++ --先++后使用
	b += a++ + c;//,a=a+1,b=b+a+1+c                              后置++ --先使用后++
	printf("a = %d b = %d c = %d\n:", a, b, c);//
	return 0;
}
#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;// ++a：加给a+1，结果为6，用加完之后的结果给c赋值，因此：a = 6  c = 6
	b = ++c, c++, ++a, a++;
	// 逗号表达式的优先级，最低，这里先算b=++c, b得到的是++c后的结果，b是7
	// b=++c 和后边的构成逗号表达式，依次从左向右计算的。
	// 表达式结束时，c++和，++a,a++会给a+2，给c加1，此时c：8，a：8，b:7
	b += a++ + c; // a先和c加，结果为16，在加上b的值7，比的结果为23，最后给a加1，a的值为9
	printf("a = %d b = %d c = %d\n:", a, b, c); // a:9, b:23, c:8
	return 0;
}