// Nama         : Fernanda Galih Saputra
// NIM          : 24060121140176
// Tanggal      : 20 Mei 2022
// Nama Program : Faktorial.c
/* Deskripsi    : menghasilkan Faktorial dari masukan N*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Faktorial(int a){
    int i;
    int sum = 1;
    for(i=a;i>=1;i--){
        if(i==1){
            sum = sum * 1;
            printf("%d = %d",i,sum);
        }
        else{
            sum = sum*i;
            printf("%dx",i);
        }
    }


}

int main(){
    int N;

    // Algoritma
    printf("Masukkan angka yang akan di Faktorialkan :  ");
    scanf("%d",&N);
    if(N>0){
        Faktorial(N);
    }
    else{
        printf("Tidak Ada Hasil");
    }
    return 0;
}
