////Nama File	    : JumlahArray.c
////Deskripsi	    : Menghitung dan menampilkan penjumlahan sub array/tabel
////Pembuat	        : Mahardika Putra Wardhana - 24060121130076
////Tgl pembuatan	: 22-03-2022

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Kamus
    int N;
    int i;
    int j;
    int sum=0;
    int subsum=0;

    //Algoritma
    printf("Masukkan Integer: ");
    scanf("%d",&N);
    int T[N];

    for (i = 0; i < N; i++){
        printf("Masukkan elemen ke-%d ", i);
        scanf("%d", &T[i]);
    }

    for (i = 0; i < N; i++){
        printf("(");
        for (j = N-1; j >= i; j--){
            printf(" %d +", T[j]);
            sum = sum + T[j];
        }
        if (i != N-1) {
            printf("\b) + ");
        }else{
            printf("\b)");
        }
    }

    printf(" = %d", sum);

   return 0;
}


