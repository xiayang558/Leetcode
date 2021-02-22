// 冒泡算法

#include <stdio.h>

#define ARR_LEN 255
#define elemType int

int BubbleSort(int *arr, int length){
    // 比较相邻两个数的大小，如果后者比前者小，则交换位置，直到交换到最前两个数为止
    elemType temp;
    int i, j;
    for (i=0; i<length-1; i++)                  /* 外循环为排序趟数，len个数进行len-1趟 */
        for (j=0; j<length-1-i; j++) {          /* 内循环为每趟比较的次数，第i趟比较len-i次 */
            if (arr[j] > arr[j+1]) {            /* 相邻元素比较，若逆序则交换（升序为左大于右，降序反之） */
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    return 0;
}

int main() {
    elemType arr[ARR_LEN] = {3,5,1,-7,4,9,-6,8,10,4};
    int len = 10;
    int i;

    BubbleSort (arr, len);
    for (i=0; i<len; i++)
        printf ("%d     ", arr[i]);
    putchar ('\n');

    return 0;
}