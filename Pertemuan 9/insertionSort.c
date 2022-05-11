/*Nama File	: insertionSort.c*/
/*Deskripsi	: Menyortir array dengan metode insertion sort*/
/*Pembuat	: Mahardika Putra Wardhana - 24060121130076*/
/*Tgl pembuatan	: Senin, 9 Mei 2022*/

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n){
    //Kamus Lokal
    int i, j, key;

    //Algoritma
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >=0 && arr[j] > key){
            arr[j + 1] = arr [j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArr(int arr[], int n){
    //Kamus Lokal
    int i;

    //Algoritma
    for (i = 0;i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void maxArr(int arr[], int n, int *max)
{
    //Kamus Lokal
    int i;
    *max = arr[0];

    //Algoritma
    for (i = 1; i < n; i++) {
        if (arr[i] > *max){
            *max = arr[i];
        }
    }

    return 0;
}

int main(){
    //Kamus
    int arr[] = {18, 15, 13, 19, 16, 14, 20, 17, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    //Algoritma
    printArr(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);
}
