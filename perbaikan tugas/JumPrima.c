// Nama         : Fernanda Galih Saputra
// NIM          : 24060121140176
// Tanggal      : 20 Mei 2022
// Nama Program : JumPrima.c
/* Deskripsi    : menghasilkan jumlah dari bilangan prima pada deret N*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N,i,Sn,j,checker;

    // Algoritma
    printf("Masukkan banyak bilangan yang dijadikan deret :  ");
    scanf("%d",&N);
    if(N>0){
        Sn = 0;
        for(i=1;i<=N;i++){
            checker = 0;
            for(j=1;j<=i;j++){
                if(i%j==0){
                    checker++;
                }
            }
            if(checker==2 && Sn == 0){
                Sn = Sn + i;
                printf(" %d",i);
            }
            else if(checker==2 && Sn != 0){
                Sn = Sn + i;
                printf("+%d",i);
            }
            if (i==N){
                printf(" dengan Jumlahan Deret Bilangannya adalah Sn= %d",Sn);
            }
        }
    }
    else{
        printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya Sn=0");
    }
    return 0;
}
