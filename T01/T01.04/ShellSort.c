#include <stdio.h>

int ShellSort(int *arr){
    int _length = sizeof(arr)/sizeof(arr[0]);
    d = _length/2;              // 确定固定增虽值
    int right;
    while (d >= 1)
    {
        for (int i = d; i <= length; i++)
        {
            int tmp = arr[i];        // 增加监视哨
            right = i - d;      // 确定要比较的最右边的位置

            while ((right > 0) && (tmp > arr[right]))
            {
                arr[right + d] = arr[right];
                right -= d;
            }
            arr[right + d] = tmp;   // 在确定的位置插入arr[i]
        }
        d = d/2;
    }
    return 0;
}