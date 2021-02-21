#include <stdio.h>

int InsertionSort(int* arr){
    int _length = sizeof(arr)/sizeof(arr[0]);
    int arrtmp,count;

    for (int i = 0; i < _length; i++){
        arrtmp = arr[i];
        count = i - 1;

        while(count >= 0 & arr[count]>arrtmp){
            arr[count + 1] = arr[count];
            count--;
        }
        arr[count + 1] = arrtmp;

    }

    return arr;
}