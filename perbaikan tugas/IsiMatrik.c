// Nama         : Fernanda Galih Saputra
// NIM          : 24060121130089
// Tanggal      : 29 Maret 2022
// Nama Program : IsMatrik.c
/* Deskripsi    : membuat matriks dengan aturan pada soal*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int M,N,i,j;

    // Algoritma
    printf("Masukkan baris M: ");
    scanf("%d",&M);
    printf("Masukkan baris N: ");
    scanf("%d",&N);
    if(M==N && M>0 && N>0){
        for(i=1;i<=M;i++){
            for(j=1;j<=N;j++){
                if(i==j){
                    printf("1 ");
                }
                else if (j>i){
                    printf("0 ");
                }
                else{
                    printf("2 ");
                }
            }
            printf("\n");
        }
    }
    else{
        printf("Inputan tidak valid");
    }
    return 0;
}
