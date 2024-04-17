#include <iostream>

using namespace std;

int main() {
  // Input nilai coding dan nilai interview
  double nilaiCoding;
  string nilaiInterview;

  cout << "Masukkan nilai coding (0-100): ";
  cin >> nilaiCoding;

  cout << "Masukkan nilai interview (A/B/C/D/E): ";
  cin >> nilaiInterview;

  // Penilaian nilai coding
  string hasilNilaiCoding;
  if (nilaiCoding > 80) {
    hasilNilaiCoding = "LOLOS";
  } else if (nilaiCoding >= 60) {
    hasilNilaiCoding = "DIPERTIMBANGKAN";
  } else {
    hasilNilaiCoding = "GAGAL";
  }

  // Penilaian nilai interview
  string hasilNilaiInterview;
  if (nilaiInterview == "A" || nilaiInterview == "B") {
    hasilNilaiInterview = "LOLOS";
  } else {
    hasilNilaiInterview = "GAGAL";
  }

  // Penentuan hasil akhir
  string hasilAkhir;
  if ((hasilNilaiCoding == "LOLOS" || hasilNilaiCoding == "DIPERTIMBANGKAN") && hasilNilaiInterview == "LOLOS") {
    hasilAkhir = "Selamat Kamu Berhasil Menjadi Calon Programmer";
  } else {
    hasilAkhir = "Maaf Kamu Belum Berhasil Menjadi Calon Programmer";
  }

  // Tampilkan hasil
  cout << hasilAkhir << endl;

  return 0;
}
