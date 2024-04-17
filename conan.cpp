#include <iostream>
#include <string>

using namespace std;

int main() {
  // Input data
  string nama;
  int umur;
  string tempatTinggal;
  double uangTabungan;

  cout << "Nama: ";
  getline(cin, nama);

  cout << "Umur: ";
  cin >> umur;

  cout << "Tempat Tinggal: ";
  cin.ignore(); // Mengabaikan newline character
  getline(cin, tempatTinggal);

  cout << "Uang Tabungan (dalam dollar): ";
  cin >> uangTabungan;

  // Analisis ciri-ciri
  bool isDon = false;
  bool isUnderboss = false;
  bool isCapo = false;

  if (umur > 40 && (tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havana") && uangTabungan > 10000000) {
    isDon = true;
  } else if (umur >= 25 && umur <= 40 && (tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan" || tempatTinggal == "Nevada") && uangTabungan >= 1000000 && uangTabungan <= 2000000) {
    isUnderboss = true;
  } else if (umur >= 18 && umur <= 24 && (tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston") && uangTabungan < 1000000) {
    isCapo = true;
  }

  // Output hasil analisis
  if (isDon) {
    cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Don." << endl;
  } else if (isUnderboss) {
    cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Underboss." << endl;
  } else if (isCapo) {
    cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Capo." << endl;
  } else {
    cout << nama << " tidak mencurigakan." << endl;
  }

  return 0;
}
