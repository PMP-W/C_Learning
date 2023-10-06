//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。


#define SwapIntBit(n) (((n) & 0x55555555) << 1 | ((n) & 0xaaaaaaaa) >> 1)
//00000000000000000000000000101010
//01010101010101010101010101010101  拿奇数位
//10101010101010101010101010101010  拿偶数位
//想拿出哪一位，就把那一位的数按位与1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	SwapIntBit(n);
	return 0;
}

/*1、先将0转换为一个结构体类型的指针，相当于某个结构体的首地址是0。此时，每一个成员的偏移量就成了相对0的偏移量，这样就不需要减去首地址了。

2、对该指针用->访问其成员，并取出地址，由于结构体起始地址为0，此时成员偏移量直接相当于对0的偏移量，所以得到的值直接就是对首地址的偏移量。

3、取出该成员的地址，强转成size_t并打印，就求出了这个偏移量。*/
#include<stdio.h>
#define OFFSETOF(type,mem) (size_t)&(((type*)0)->mem) 
struct S
{
	char a;
	int b;
	char c;
};

int main()
{
	printf("%d\n", OFFSETOF(struct S,a));
	printf("%d\n", OFFSETOF(struct S, b));
	printf("%d\n", OFFSETOF(struct S, c));

	return 0;
}
