#include <stdio.h>

int main(){

    int hari, bulan, tahun;

    printf("Masukkan jumlah hari yang ingin dihitung : ");
    scanf("%d", &hari);

    tahun = hari / 365;
    bulan = (hari % 365)/30;
    hari = (hari % 365)%30;

    printf("%d Tahun\n%d Bulan\n%d Hari\n", tahun, bulan, hari);


return 0;
}
