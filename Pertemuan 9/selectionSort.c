/*Nama File	: selectionSort.c*/
/*Deskripsi	: Menyortir array dengan metode selection sort*/
/*Pembuat	: Mahardika Putra Wardhana - 24060121130076*/
/*Tgl pembuatan	: Senin, 9 Mei 2022*/

#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n){
    //Kamus Lokal
    int i, j, min;

    //Algoritma
    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            min = i;
            if (arr[j] < arr[min]){
                min = j;
            }
            swap(&arr[i], &arr[min]);
        }
    }
}

void swap(int *a, int *b){
    //Kamus Lokal
    int temp;

    //Algoritma
    temp = *a;
    *a = *b;
    *b = temp;
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

int main(){
    //Kamus
    int arr[] = {18, 15, 13, 19, 16, 14, 20, 17, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    //Algoritma
    printArr(arr, n);
    selectionSort(arr, n);
    printArr(arr, n);
}

