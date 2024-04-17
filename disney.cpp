#include <iostream>

using namespace std;

int main() {
  // Input data
  int umur;
  double tinggiBadan;

  cout << "Masukkan umur anak (dalam tahun): ";
  cin >> umur;

  cout << "Masukkan tinggi badan anak (dalam cm): ";
  cin >> tinggiBadan;

  // Hitung tarif dasar
  int tarifDasar;
  if (umur < 3) {
    tarifDasar = 30000;
  } else if (umur < 7) {
    tarifDasar = 40000;
  } else if (umur < 10) {
    tarifDasar = 50000;
  } else {
    tarifDasar = 80000;
  }

  // Hitung tarif tambahan
  int tarifTambahan = 0;
  if (umur >= 2 && umur <= 3 && tinggiBadan > 70) {
    tarifTambahan = 10000;
  } else if (umur >= 4 && umur <= 7 && tinggiBadan > 120) {
    tarifTambahan = 15000;
  } else if (umur >= 8 && umur <= 10 && tinggiBadan > 150) {
    tarifTambahan = 20000;
  }

  // Hitung total tarif
  int totalTarif = tarifDasar + tarifTambahan;

  // Tampilkan hasil
  if (umur < 1) {
    cout << "Dilarang masuk" << endl;
  } else {
    cout << "Tarif untuk anak dengan umur " << umur << " tahun dan tinggi badan " << tinggiBadan << " cm: Rp." << totalTarif << endl;
  }

  return 0;
}
