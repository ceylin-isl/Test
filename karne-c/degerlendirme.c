#include <stdio.h>
#include "degerlendirme.h"

const char *harf_notu(int puan) {
    if (puan >= 90) return "AA";
    else if (puan >= 85) return "BA";
    else if (puan >= 80) return "BB";
    else if (puan >= 75) return "CB";
    else if (puan >= 70) return "CC";
    else if (puan >= 60) return "DC";
    else if (puan >= 50) return "DD";
    else return "FF";
}

int kalan_dersler(int notlar[], const char *adlar[], int n) {
    int sayac = 0;
    for (int i = 0; i < n; i++) {
        if (notlar[i] < 50) {
            printf("%s (%d)\n", adlar[i], notlar[i]);
            sayac++;
        }
    }
    return sayac;
}

const char *basari_durumu(double ort) { return "??"; }
