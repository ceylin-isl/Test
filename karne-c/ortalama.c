#include "ortalama.h"

double ortalama(int notlar[], int n) {
    if (n <= 0) return 0.0;
    int toplam = 0;
    for (int i = 0; i < n; i++) {
        toplam += notlar[i];
    }
    return (double)toplam / n;
}

double agirlikli_ortalama(int notlar[], int krediler[], int n) {
    if (n <= 0) return 0.0;
    int agirlikli_toplam = 0;
    int kredi_toplami = 0;
    for (int i = 0; i < n; i++) {
        agirlikli_toplam += notlar[i] * krediler[i];
        kredi_toplami += krediler[i];
    }
    if (kredi_toplami == 0) return 0.0;
    return (double)agirlikli_toplam / kredi_toplami;
}

int en_yuksek_ders(int notlar[], int n) {
    int en_iyi = 0;
    for (int i = 1; i < n; i++) {
        if (notlar[i] > notlar[en_iyi]) {
            en_iyi = i;
        }
    }
    return en_iyi;
}