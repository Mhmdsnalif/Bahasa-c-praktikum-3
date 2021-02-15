#include <stdio.h>
#include <stdlib.h>

int main(){

    char nama[30], nama_kegiatan[30], nama_kegiatan1[30], nama_kegiatan2[30];
    int poin, poin1, poin2, total;

    printf("Program Data TAK Mahasiswa\n");
    printf("==========================\n\n");

    printf("Masukkan Nama Mahasiswa         : ");
    gets(nama);
    fflush(stdin);
    printf("Masukkan Nama Kegiatan          : ");
    gets(nama_kegiatan);
    printf("Masukkan poin TAK yang di dapat : ");
    scanf("%i", &poin);

    fflush(stdin);
    printf("Masukkan Nama Kegiatan          : ");
    gets(nama_kegiatan1);
    printf("Masukkan poin TAK yang di dapat : ");
    scanf("%i", &poin1);

    fflush(stdin);
    printf("Masukkan Nama Kegiatan
           :");
    gets(nama_kegiatan2);
    printf("Masukkan poin TAK yang di dapat : ");
    scanf("%i", &poin2);

    printf("=====================================================\n\n");

    total = poin + poin1 + poin2;

    printf("Mahasiswa %s mempunyai total TAK %i yang terdiri dari : \n", nama, total);
    printf("1. %s \n", nama_kegiatan);
    printf("2. %s \n", nama_kegiatan1);
    printf("3. %s \n", nama_kegiatan2);

return 0;
}
