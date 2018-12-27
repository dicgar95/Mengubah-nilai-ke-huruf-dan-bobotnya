/* Oleh Muhammad Dicky Garcia
STT PELITA BANGSA */
#include<stdio.h>

int ubah (int nilai);

int main (void)
{
int nilai;
printf("PROGRAM MENGUBAH NILAI KE HURUF\n\n");
printf("Masukan Nilai Antara 1 sampai 5 : ");
scanf("%d",&nilai);
ubah (nilai);
getchar();
}

int ubah (int nilai)
{
switch (nilai)
{
    case 5:
        printf("Nilai Huruf : A"); break;
    case 4:
        printf("Nilai Huruf : B"); break;
    case 3:
        printf("Nilai Huruf : C"); break;
    case 2:
        printf("Nilai Huruf : D"); break;
    case 1:
        printf("Nilai Huruf : E"); break;
    default :
        printf("Kesalah dalam memasukan Angka");
}
return (nilai);
}
