#include <stdio.h>
#include "veri.h"
#include "degerlendirme.h"

int main(void) {
    printf("Harf notlari:\n");
    for (int i = 0; i < DERS_SAYISI; i++) {
        printf("%d -> %s\n", notlar[i], harf_notu(notlar[i]));
    }

    printf("\nKalan dersler:\n");
    int kalan = kalan_dersler(notlar, ders_adlari, DERS_SAYISI);
    printf("Kalan ders sayisi: %d\n", kalan);

    printf("\nbasari_durumu(68.36): %s\n", basari_durumu(68.36));
    return 0;
}