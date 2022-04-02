////Nama File	    : SelisihBukit.c
////Deskripsi	    : Menghitung dan menampilkan selisih terbesar puncak dan lembah bukit
////Pembuat	        : Mahardika Putra Wardhana - 24060121130076
////Tgl pembuatan	: 22-03-2022

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Kamus
    int N;
    int i;
    int big;
    int small;
    int s;

    //Algoritma
    printf("Masukkan Integer: ");
    scanf("%d",&N);
    int T[N];

    for (i = 0; i < N; i++){
        printf("Masukkan elemen ke-%d ", i);
        scanf("%d", &T[i]);
    }

    big = T[0];
    for(i=1; i < N; i++){
        if (big < T[i]){
            big = T[i];
        }
    }
    printf("big = %d \n", big);

    small = T[0];
    for(i=1; i < N; i++){
        if (small > T[i]){
            small = T[i];
        }
    }
    printf("small = %d \n", small);

    s = big - small;

    printf("Selisih = %d", s);

   return 0;
}


