//Nama File	: UpahKerja.c
//Deskripsi	: Menampilkan total upah kerja berdasarkan golongan dan jam kerja
//Pembuat	: Mahardika Putra Wardhana - 24060121130076
//Tgl pembuatan	: Sabtu, 12-03-2022 18:12 WIB

#include <stdio.h>

int main()
    {
     ///*Judul*/
        printf("UpahKerja\n");
        printf("Menampilkan total upah kerja berdasarkan golongan dan jam kerja\n \n");

    /*Kamus*/
        int g; /*golongan gaji 1-4*/
        int t; /*jam kerja, jam*/
        int T; /*total upah kerja*/

    /*Algoritma*/
        printf("Masukkan golongan = ", &g);
        scanf("%d", &g);

        printf("Masukkan jam kerja = ", &t);
        scanf("%d", &t);

        switch (g) {
        case 1:
            T = t * 1000;
            printf("Gaji total golongan 1 dengan jam kerja %d adalah = %d\n ",t, T);
            break;
        case 2:
            T = t * 1500;
            printf("Gaji total golongan 2 dengan jam kerja %d adalah = %d\n",t, T);
            break;
        case 3:
            T = t * 2000;
            printf("Gaji total golongan 3 dengan jam kerja %d adalah = %d\n ",t, T);
            break;
        case 4:
            T = t * 2500;
            printf("Gaji total golongan 4 dengan jam kerja %d adalah = %d\n ",t, T);
            break;
        default:
            printf("golongan tidak ditemukan\n");
            break;
        }

    return 0;
}


