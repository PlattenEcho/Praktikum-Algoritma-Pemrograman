#include "searching.h"
#include <stdio.h>
#include <stdlib.h>

void SEQSearchX1(int T[], int N, int *IX, int X){
    //Kamus Lokal
    int i;

    //Algoritma
    i = 0;
    while ((i < N) && (T[i] != X)) {
        i = i + 1;
    }
    if (T[i] == X) {
        *IX = i;
    } else {
        *IX = -1;
        }
}
