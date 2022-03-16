//Nama File	: HargaDiskon.c
//Deskripsi	: Menampilkan hasil harga setelah diskon berdasarkan jenis diskon
//Pembuat	: Mahardika Putra Wardhana - 24060121130076
//Tgl pembuatan	: Sabtu, 12-03-2022 18:12 WIB

#include <stdio.h>

int main()
    {
    ///*Judul*/
        printf("HargaDiskon\n");
        printf("Menampilkan hasil harga setelah diskon berdasarkan jenis diskon\n \n");

    /*Kamus*/
        char d; /*jenis diskon*/
        int h; /*harga barang sebelum diskon*/
        int T; /*total harga barang setelah diskon*/

    /*Algoritma*/
        printf("Masukkan jenis diskon = ", &d);
        scanf("%c", &d);

        printf("Masukkan harga = ", &h);
        scanf("%d", &h);


        switch (d) {
        case 'a':
            T = h - (h * 0.1) ;
            printf("Harga setelah diskon jenis A adalah = %d\n ", T);
            break;
        case 'A':
            T = h - (h * 0.1) ;
            printf("Harga setelah diskon jenis A adalah = %d\n ", T);
            break;
        case 'b':
            T = h - (h * 0.15) ;
            printf("Harga setelah diskon jenis B adalah = %d\n ", T);
            break;
        case 'B':
            T = h - (h * 0.15) ;
            printf("Harga setelah diskon jenis B adalah = %d\n ", T);
            break;
        case 'c':
            T = h - (h * 0.2) ;
            printf("Harga setelah diskon jenis C adalah = %d\n ", T);
            break;
        case 'C':
            T = h - (h * 0.2) ;
            printf("Harga setelah diskon jenis C adalah = %d\n ", T);
            break;
        default:
            printf("Jenis diskon tidak ditemukan\n");
            break;
        }

    return 0;
}

