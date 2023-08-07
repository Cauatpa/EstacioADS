#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Digite um numero inteiro entre 1 e 10: ";
    cin >> num;

    cout << "toboada de " << num << ":" << endl;

    for (int i = 1; i <= 10; ++i) {
        cout << num << " . " << i << " = " << num * i << endl;
    }
    return 0;
}