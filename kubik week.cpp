#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, score, total = 0;
    int highest = 0;
    int passed = 0;
    double average;
    
    vector<int> scores;

    cout << "Masukkan banyaknya nilai: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> score;
        scores.push_back(score);
        total += score;
        if (score > highest) {
            highest = score;
        }
        if (score >= 60) {
            passed++;
        }
    }

    average = (double) total / n;

    cout << "Total nilai: " << total << endl;
    cout << "Rata-rata: " << average << endl;
    cout << "Nilai tertinggi: " << highest << endl;
    cout << "Jumlah yang lulus: " << passed << endl;

    return 0;
}
