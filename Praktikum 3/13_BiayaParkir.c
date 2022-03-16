//Nama File	: BiayaParkir.c
//Deskripsi	: Menampilkan hasil total biaya parkir yang dihitung berdasarkan lamanya parkir
//Pembuat	: Mahardika Putra Wardhana - 24060121130076
//Tgl pembuatan	: Sabtu, 12-03-2022 17:59 WIB

#include <stdio.h>

int main()
    {
    ///*Judul*/
        printf("BiayaParkir\n");
        printf("Menampilkan hasil total biaya parkir yang dihitung berdasarkan lamanya parkir\n \n");

    ///*Kamus*/
        int t; /*waktu parkir, jam*/
        int B; /*biaya parkir*/

    ///*Algoritma*/
        printf("Masukkan waktu parkir = ", &t);
        scanf("%d", &t);

        if (t > 2) {
            B = 2000 + 500 * (t - 2);
            printf ("Total biaya parkir = %d\n", B);
        } else {
            B = 2000;
            printf ("Total biaya parkir = %d\n", B);
        }
        return 0;
}
