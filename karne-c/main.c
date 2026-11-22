#include <stdio.h>
#include "veri.h"
#include "ortalama.h"
#include "degerlendirme.h"

int main(void) {
    int secim;
    do {
        printf("\n=== KARNE HESAPLAYICI ===\n");
        printf("4) Karne\n");
        printf("5) Kalan dersler\n");
        printf("6) Basari durumu\n");
        printf("0) Cikis\n> ");
        if (scanf("%d", &secim) != 1) break;
        switch (secim) {
                        case 4:
                for (int i = 0; i < DERS_SAYISI; i++) {
                    printf("%-14s %3d  %s\n", ders_adlari[i], notlar[i], harf_notu(notlar[i]));
                }
                break;
            case 5: {
                int sayi = kalan_dersler(notlar, ders_adlari, DERS_SAYISI);
                printf("Kalan ders sayisi: %d\n", sayi);
                break;
            }
            case 6: {
                double ort = agirlikli_ortalama(notlar, krediler, DERS_SAYISI);
                printf("Basari durumu: %s (%.2f)\n", basari_durumu(ort), ort);
                break;
            }
            case 0: break;
            default: printf("Gecersiz secim\n");
        }
    } while (secim != 0);
    return 0;
}
