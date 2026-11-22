#include <stdio.h>
#include "veri.h"
#include "ortalama.h"
#include "degerlendirme.h"

int main(void) {
    int secim;
    do {
        printf("\n=== KARNE HESAPLAYICI ===\n");
        /* MENU: secenekler buraya */
		printf("1) Basit ortalama\n");
		printf("2) Agirlikli ortalama\n");
		printf("3) En yuksek ders\n");
        printf("0) Cikis\n> ");
        if (scanf("%d", &secim) != 1) break;
        switch (secim) {
			case 1:
			    printf("Basit ortalama: %.2f\n", ortalama(notlar, DERS_SAYISI));
			    break;
			case 2:
			    printf("Agirlikli ortalama: %.2f\n", agirlikli_ortalama(notlar, krediler, DERS_SAYISI));
			    break;
			case 3: {
			    int i = en_yuksek_ders(notlar, DERS_SAYISI);
			    printf("En yuksek ders: %s (%d)\n", ders_adlari[i], notlar[i]);
			    break;
			}

            /* MENU: case'ler buraya */
            case 0: break;
            default: printf("Gecersiz secim\n");
        }
    } while (secim != 0);
    return 0;
}
