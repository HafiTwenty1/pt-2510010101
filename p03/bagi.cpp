#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Bilangan pertama: ";
    cin >> a;
    cout << "Bilangan kedua  : ";
    cin >> b;
    if (b == 0) {
        cout << "Pembagi tidak boleh 0\n";
        return 1;
    }
    cout << a << " dibagi " << b << " adalah " << a / b << " sisa " << a % b << "\n";
    return 0;
}
