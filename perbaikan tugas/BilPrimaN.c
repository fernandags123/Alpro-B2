// Nama         : Fernanda Galih Saputra
// NIM          : 24060121140176
// Tanggal      : 20 Mei 2022
// Nama Program : BilPrimaN.c
/* Deskripsi    : menghasilkan deret angka yang prima dalam rentang N*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N,i,j,checker;

    // Algoritma
    printf("Masukkan angka maksimal untuk suatu deret :  ");
    scanf("%d",&N);
    if(N>1){
        printf("Bilangan Primanya adalah ");
        for(i=1;i<=N;i++){
            checker = 0;
            for(j=1;j<=i;j++){
                if(i%j==0){
                    checker++;
                }
            }
            if(checker==2){
                printf(" %d",i);
            }
        }
    }
    else{
        printf("Tidak Ada Bilangan Prima");
    }
    return 0;
}
