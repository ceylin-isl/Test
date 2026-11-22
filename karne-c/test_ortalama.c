#include <stdio.h>
#include "veri.h"
#include "ortalama.h"

int main(void) {
    printf("Basit ortalama: %.2f\n", ortalama(notlar, DERS_SAYISI));
    printf("Agirlikli ortalama: %.2f\n", agirlikli_ortalama(notlar, krediler, DERS_SAYISI));

    int i = en_yuksek_ders(notlar, DERS_SAYISI);
    printf("En yuksek ders: %d (%s, %d)\n", i, ders_adlari[i], notlar[i]);
    return 0;
}