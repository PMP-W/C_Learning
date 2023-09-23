//删除指定数字
//1
#include <stdio.h>
int arr[10000];
int arr2[10000];
int main() {
    int n = 0;
    int i = 0;
    int j = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target = 0;
    scanf("%d", &target);
    for (i = 0, j = 0; i < n; i++)
    {
        if (arr[i] != target)
        {
            arr2[j] = arr[i];//将不等于target的数字保存在另一个数组中
            j++;
        }
    }
    n = j;
    i = 0;
    for (; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
//2
#include <stdio.h>


int main()
{
    int n = 0;
    int arr[50] = {0};
    int del = 0;
    scanf("%d", &n);
    int i = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &del);//要删除的元素
    int j = 0;
    for(i=0; i<n; i++)
    {
        if(arr[i] != del)
        {
            arr[j++] = arr[i];
        }
    }
    
    for(i=0; i<j; i++)
    {
        printf("%d ", arr[i]);    
    }
    return 0;
}


//变种水仙花数
#include <stdio.h>
int main() {
    for(int i=10000;i<100000;i++)
    {
        int sum=0;
        int j=0;
        for(j=10;j<=10000;j*=10)
        {
            sum+=(i/j)*(i%j);
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

//求最大公约数（辗转相除法）
/*
最大公约数：即两个数据中公共约数的最大者。
求解的方式比较多，暴力穷举、辗转相除法、更相减损法、Stein算法算法
此处主要介绍：辗转相除法


思路：
例子：18和24的最大公约数
第一次：a = 18  b = 24  c = a%b = 18%24 = 18
      循环中：a = 24   b=18
第二次：a = 24   b = 18  c = a%b = 24%18 = 6
      循环中：a = 18   b = 6


第三次：a = 18   b = 6   c=a%b = 18%6 = 0
  循环结束
  
此时b中的内容即为两个数中的最大公约数。
*/


int main()
{
	int a = 18;
	int b = 24;
	int c = 0;

	while(c=a%b)
	{
		a = b;
		b = c;
	}

	printf("%d\n", b);
	return 0;
}