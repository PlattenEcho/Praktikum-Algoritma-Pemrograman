//Nama File	: TunjAnak.c
//Deskripsi	: Menampilkan total tunjangan berdasarkan banyak anak
//Pembuat	: Mahardika Putra Wardhana - 24060121130076
//Tgl pembuatan	: Sabtu, 12-03-2022 18:12 WIB

#include <stdio.h>

int main()
    {
    ///*Judul*/
        printf("TunjAnak\n");
        printf("Menampilkan total tunjangan berdasarkan banyak anak\n \n");

    /*Kamus*/
        int a; /*jumlah anak >= 0*/
        int g; /*gaji pokok > 0*/
        int T; /*tunjangan total*/

    /*Algoritma*/
        printf("Masukkan jumlah anak = ", &a);
        scanf("%d", &a);

        printf("Masukkan gaji pokok = ", &g);
        scanf("%d", &g);

        if (a >= 3) {
            T = 3 * 1/10 * g;
            printf ("tunjangan sebesar = %d\n", T);
        } else {
            T = a * 1/10 * g;
            printf ("tunjangan sebesar = %d\n", T);
        }

    return 0;
}


