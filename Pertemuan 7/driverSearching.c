/*Nama File	: driverSearching.c*/
/*Deskripsi	: Mencari integer dalam suatu array secara sequential tanpa boolean*/
/*Pembuat	: Mahardika Putra Wardhana - 24060121130076*/
/*Tgl pembuatan	: Minggu, 17 April 2022 11:31 WIB*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "searching.h"

int main()
{
    //Kamus
    /*int arr[];*/
    int x; //elemen yang dicari
    int N; //banyak elemen array, minimal 10
    int ix;
    int a; //elemen array
    int i; //counter

    //Algoritma
    printf("Masukkan banyak elemen array: ");
    scanf("%d",&N);
    int arr[N];

    if (N >= 10){
        for(i=0; i<N; i++)
        {
            printf("Masukkan elemen ke-%d = ", i);
            scanf("%d", &a);
            arr[i] = a;
        }

        printf("\n");
        printf("Masukkan Integer yang hendak dicari: ");
        scanf("%d",&x);

        SEQSearchX1(arr, N, &ix, x);
        (ix == -1)
            ? printf("Elemen tidak ditemukan")
            : printf("Elemen ditemukan pada ke-%d ", ix);
    } else {
        printf("Harus lebih dari 10");
    }

    return 0;
}

