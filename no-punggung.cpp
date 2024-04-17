#include <iostream>

using namespace std;

int main() {
  // Input nomor punggung
  int nomorPunggung;

  cout << "Masukkan nomor punggung: ";
  cin >> nomorPunggung;

  // Penentuan posisi pemain
  string posisiPemain;

  if (nomorPunggung % 2 == 0) {
    if (nomorPunggung >= 50 && nomorPunggung <= 100) {
      posisiPemain = "Target Attacker (Berhak Dipilih Menjadi Capten)";
    } else {
      posisiPemain = "Target Attacker";
    }
  } else {
    if (nomorPunggung > 90) {
      posisiPemain = "Playmaker";
    } else if (nomorPunggung % 3 == 0 && nomorPunggung % 5 == 0) {
      posisiPemain = "Keeper";
    } else {
      posisiPemain = "Defender";
    }
  }

  // Output posisi pemain
  cout << "Posisi pemain dengan nomor punggung " << nomorPunggung << " adalah: " << posisiPemain << endl;

  return 0;
}
