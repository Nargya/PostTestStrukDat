#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int data[n] = {1,2, 3, 4, 5, 5};
    int cari = 5;
    bool ketemu = false;
    int i;
    
    for (i = 0; i < n; i++) {
        if (data[i] == cari) {
            ketemu = true;
            break;
        }
    }
    
    cout << "\t Sequential Search\n" << endl;
    cout << " data: {1,2,3,4,5,5}" << endl;
    
    if (ketemu) {
        cout << "\n angka " << cari << " Ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " Tidak ditemukan pada data." << endl;
    }
    
    return 0;
}
