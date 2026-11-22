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

int kalan_dersler(int notlar[], const char *adlar[], int n) { return 0; }

const char *basari_durumu(double ort) { return "??"; }
