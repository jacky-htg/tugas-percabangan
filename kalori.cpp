#include <iostream>

using namespace std;

int main() {
  // Input data
  int lamaLari, lamaPushUp, lamaPlank;

  cout << "Masukkan lama lari (dalam menit): ";
  cin >> lamaLari;

  cout << "Masukkan lama push-up (dalam menit): ";
  cin >> lamaPushUp;

  cout << "Masukkan lama plank (dalam menit): ";
  cin >> lamaPlank;

  // Hitung kalori yang dibakar
  int kaloriLari = (lamaLari * 60) / 5;
  int kaloriPushUp = (lamaPushUp * 200) / 30;
  int kaloriPlank = lamaPlank * 5;

  // Hitung total kalori
  int totalKalori = kaloriLari + kaloriPushUp + kaloriPlank;

  // Output hasil
  cout << "Total kalori yang dibakar: " << totalKalori << endl;

  return 0;
}
