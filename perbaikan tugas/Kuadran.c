// Nama         : Fernanda Galih Saputra
// NIM          : 24060121140176
// Tanggal      : 20 Mei 2022
// Nama Program : Kuadran.c
/* Deskripsi    : mennentukan kuadran dari koordinat yang diberikan*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int X,Y;

    // Algoritma
    printf("Masukkan nilai X :  ");
    scanf("%d",&X);
    printf("Masukkan nilai Y: ");
    scanf("%d",&Y);
    if(X>0){
        if(Y>0){
            printf("Kuadran 1");
        }
        else if (Y<0){
            printf("Kuadran 4");
        }
        else{
            printf("Tidak Valid");
        }
    }
    else if (X<0){
        if(Y>0){
            printf("Kuadran 2");
        }
        else if (Y<0){
            printf("Kuadran 3");
        }
        else{
            printf("Tidak Valid");
        }
    }
    else{
        printf("Inputan tidak valid");
    }
    return 0;
}
