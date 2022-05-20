// Nama Program : CekSempurna.c
/* Deskripsi    : mengecek apakah sebuah bilangan merupakan bilangan sempurna*/
// Pembuat      : Fernanda Galih Saputra - 24060121140176
// Tanggal      : 20 Mei 2022 -  21.29

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // Kamus
    int N,i,sempurna;
    sempurna = 0;
    printf("Masukkan bilangan yang menurutmu Sempurna? ");
    scanf("%d",&N);

    for(i=1; i<N ;i++){
        if (N % i == 0){
            sempurna = sempurna + i;
        }
    }
    if (N == sempurna){
        printf("Bilangan Sempurna");
    }
    else{
        printf("Bukan bilangan Sempurna");
    }
    return 0;
}
