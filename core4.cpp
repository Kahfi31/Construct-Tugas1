#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    double jarak_ke_bestie, jarak_ke_tempat_acak, jarak_kembali_ke_rumah;
    double konsumsi_bensin_per_km, harga_bensin_per_liter, total_jarak, total_bensin, total_biaya;

    // Input jarak dan konsumsi bensin
    cout << "Masukkan jarak ke rumah teman (km): ";
    cin >> jarak_ke_bestie;

    cout << "Masukkan jarak dari rumah teman ke tempat acak (km): ";
    cin >> jarak_ke_tempat_acak;

    cout << "Masukkan jarak dari tempat acak ke rumahmu (km): ";
    cin >> jarak_kembali_ke_rumah;

    cout << "Masukkan konsumsi bensin motor (km/liter): ";
    cin >> konsumsi_bensin_per_km;
    
    cout << "Masukkan Harga bensin motor (Rupiah): ";
    cin >> harga_bensin_per_liter;

    // Menghitung total jarak dan total bensin yang diperlukan
    total_jarak = jarak_ke_bestie + jarak_ke_tempat_acak + jarak_kembali_ke_rumah;
    total_bensin = total_jarak / konsumsi_bensin_per_km;
    total_biaya = total_bensin * harga_bensin_per_liter;

    // Menampilkan hasil perhitungan
    cout << "Total bensin yang diperlukan: " << total_bensin << " liter" << endl;
    cout << "Harga bensin yang dikeluarkan: " << " Rp " << total_biaya << endl;

    return 0;
}
