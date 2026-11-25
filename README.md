# Karne Hesaplayici

Ders notlarindan ortalama, harf notu ve kalinan dersleri cikaran terminal programi.

## Calistirma

```bash
cd karne-c
gcc main.c ortalama.c degerlendirme.c -o karne
./karne
cat << 'EOF' > README.md
# Karne Hesaplayici

Ders notlarindan ortalama, harf notu ve kalinan dersleri cikaran terminal programi.

## Calistirma

C icin:
  cd karne-c
  gcc main.c ortalama.c degerlendirme.c -o karne
  ./karne

## Ornek cikti

  === KARNE HESAPLAYICI ===
  1) Basit ortalama
  2) Agirlikli ortalama
  3) En yuksek ders
  4) Karne
  5) Kalan dersler
  6) Basari durumu
  0) Cikis

## Kim ne yapti

- Kisi A: Ortalama fonksiyonlari (ortalama, agirlikli_ortalama, en_yuksek_ders) ve ilgili menu adimlari.
- Kisi B: Degerlendirme fonksiyonlari (harf_notu, kalan_dersler, basari_durumu) ve ilgili menu adimlari.
