//Nama File	: TarifPLN.c
//Deskripsi	: Menampilkan total tarif listrik berdasarkan daya listrik dan golongan
//Pembuat	: Mahardika Putra Wardhana - 24060121130076
//Tgl pembuatan	: Sabtu, 12-03-2022 18:12 WIB

#include <stdio.h>

int main()
    {
    ///*Judul*/
        printf("TarifPLN\n");
        printf("Menampilkan total tarif listrik berdasarkan daya listrik dan golongan\n \n");

    /*Kamus*/
        int d; /*daya listrik, kwh*/
        int g; /*golongan 1-2*/
        int T; /*total tarif pln*/

    /*Algoritma*/
        printf("Masukkan daya listrik = ", &d);
        scanf("%d", &d);

        printf("Masukkan golongan = ", &g);
        scanf("%d", &g);

        if (d >= 100) {
            if (d >= 1000000) {
                T = g * 1000 * d + (g * 1000 * d) * 10/100;
                printf ("Tarif listrik sebesar = %d\n", T);
            } else {
                T = g * 1000 * d;
                printf ("Tarif listrik sebesar = %d\n", T);
            }
        } else {
            T = g * 1000 * 100;
            printf ("Tarif listrik sebesar = %d\n", T);
        }

    return 0;
}



