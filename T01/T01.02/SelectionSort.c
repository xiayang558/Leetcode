#include <stdio.h>

int SelectionSort(int *arr){
    int i, j;       //循环变量
    int MinIndex;   //最小值的下标
    int len = sizeof(arr) / sizeof(arr);
    for(i = 0; i < len - 1; i++){       //n个数比较n-1次
        MinIndex = i;
        for(j = i + 1; j < len; j++){       //每轮比较n-1-i次
            if (arr[MinIndex] > arr[j])
                MinIndex = j;           //保存较小数的下标
        }
        if(MinIndex != i){              //找到最小值之后比较是不是最下标为i的元素，如果不是，则交换
            arr[MinIndex] += arr[i];
            arr[i] = arr[MinIndex] - arr[i];
            arr[MinIndex] =arr[MinIndex] -arr[i];
        }
    }
}