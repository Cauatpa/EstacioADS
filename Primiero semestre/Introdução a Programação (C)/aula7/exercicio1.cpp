#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Digite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;
    cout << "Digite o valor de C: ";
    cin >> c;

    if (a + b < c) {
        cout << "A soma de A + B e menor que C." << endl;
    } else {
        cout << "A soma de A + B nao e menor que C." << endl;
    }

    return 0;
}