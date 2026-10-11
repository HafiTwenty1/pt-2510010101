#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Bilangan pertama : ";
    cin >> a;
    cout << "Bilangan kedua   : ";
    cin >> b;
    cout << "Bilangan ketiga  : ";
    cin >> c;

    double terbesar = a;
    if (b > terbesar) {
        terbesar = b;
    }
    if (c > terbesar) {
        terbesar = c;
    }
    cout << "Terbesar         : " << terbesar << "\n";
    return 0;
}
