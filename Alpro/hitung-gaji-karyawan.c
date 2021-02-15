#include <stdio.h>
#include <stdlib.h>

int main(){

    char nama[30];
    int jam, tunjangan, lembur, makan, gaji, masuk,total;

    printf("Program Menghitung gaji Karyawan\n");
    printf("================================\n\n");

    printf("Masukkan nama karyawan : ");
    gets(nama);
    printf("Masukkan nominal gaji karyawan : ");
    scanf("%i",&gaji);
    printf("Masukkan jam lembur : ");
    scanf("%i",&jam);
    printf("Masukkan total masuk kerja : ");
    scanf("%i", &masuk);
    printf("======================================\n\n");

    lembur = jam * 0.03 * gaji;
    tunjangan = 0.25 * gaji;
    makan = masuk * 25000;
    total = gaji + tunjangan + lembur + makan;

    printf("\nNama karyawan : %s", nama);
    printf("\nGaji pokok    : Rp. %i", gaji);
    printf("\nTunjangan     : Rp. %i", tunjangan);
    printf("\nUang lembur   : Rp. %i", lembur);
    printf("\nUang makan    : Rp. %i", makan);
    printf("\nTotal gaji    : Rp. %i", total);


return 0;
}
