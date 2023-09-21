//删除指定数字
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
