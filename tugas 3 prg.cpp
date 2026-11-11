// f(n) tersusun dari potongan-potongan yang berulang:
// f(5) = 5*(4/2) * 3*(2/2) * 1
// f(7) = 7*(6/2) * 5*(4/2) * 3*(2/2) * 1

// Setiap potongan berbentuk n * ((n-1)/2), lalu potongan berikutnya
// dimulai dari n-2 (7 -> 5 -> 3 -> 1)

// Jadi rumus rekursifnya adalah:
// f(n) = n * ((n-1)/2) * f(n-2)

// Base case: f(1) = 1, yaitu "*1" terakhir pada soal.
// Tanpa base case, fungsi akan memanggil dirinya terus tanpa henti.

// Contoh f(5):
// f(5) = 5 * (4/2) * f(3)
// f(3) = 3 * (2/2) * f(1)
// f(1) = 1
// f(5) = 5 * 2 * 3 * 1 * 1 = 30

#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung f(n)
long long f(int n) {
    if (n <= 1) { // base case: berhenti dan dikembalikan ke 1
        return 1;
    }
    return n * ((n - 1) / 2) * f(n - 2); // panggil f(n-2)
}

int main() {
    int n;
    cout << "Masukkan bilangan ganjil: ";
    cin >> n;
    
    if (n < 1 || n % 2 == 0) {
        cout << "Input harus bilangan ganjil positif!" << endl;
        return 0;
    }
    
    cout << "f(" << n << ") = " << f(n) << endl;
    return 0;
}
