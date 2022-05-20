// Nama         : Fernanda Galih Saputra
// NIM          : 24060121140176
// Tanggal      : 20 Mei 2022
// Nama Program : JumDere41t.c
/* Deskripsi    : menghasilkan jumlah dari elemen deret sebanyak N buah deret*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N,i,Sn,bil;

    // Algoritma
    printf("Masukkan banyak bilangan yang dijadikan deret :  ");
    scanf("%d",&N);
    if(N>0){
        Sn = 0;
        printf("Sn= ");
        for(i=1;i<=N;i++){
            bil = i*(i+1)/2;
            Sn = Sn + bil;
            if(i==N){
                printf("%d = %d",bil,Sn);
            }
            else{
                printf("%d+",bil);
            }
        }
    }
    else{
        printf("Inputan tidak valid");
    }
    return 0;
}
