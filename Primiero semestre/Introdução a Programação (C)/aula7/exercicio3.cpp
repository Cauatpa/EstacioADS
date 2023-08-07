#include <iostream>

using namespace std;

int main() {
    int numero;
    
    cout << "Digite um numero: ";
    cin >> numero;
    
    if (numero > 0) {
        cout << "O dobro do numero " << numero << " e: " << numero * 2 << endl;
    } else {
        cout << "O triplo do numero " << numero << " e: " << numero * 3 << endl;
    }
    
    return 0;
}
