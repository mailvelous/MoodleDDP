/* 
Deskripsi : menampilkan bilangan dua kali lipat
Nama /Author : Fauzi Ismail
Tanggal/versi : 21/10/2024
*/

#include<stdio.h>

int main(){
    //tulis jawaban anda dibawah ini
    int X;
    int Y;


    scanf("%d", &X);
    scanf("%d", &Y);
    for (int i = 0; Y >= X; i++){
      printf("%d", X);
      X++;
      printf(" ");
    }

    
    return 0;
}
