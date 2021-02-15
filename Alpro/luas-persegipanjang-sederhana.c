#include <stdio.h>

int main(){

    int luas, panjang, lebar;
    printf("Menghitung Luas Persegi Panjang\n");
    printf("===============================\n\n");

    printf("Masukkan Panjang : ");
    scanf("%i", &panjang);
    printf("Masukkan Lebar   : ");
    scanf("%i", &lebar);

    luas = panjang * lebar;

    printf("Luas persegi panjang adalah %i\n\n", luas);

return 0;
}
