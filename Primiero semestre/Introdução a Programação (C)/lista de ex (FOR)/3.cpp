#include <iostream>
using namespace std;

//não vimos o bool ainda, mas como eu ja conhecia eu achei mais facil para o uso do for.

bool e_primo(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    cout << "Digite um numero inteiro: ";
    cin >> n;

    bool n_primo = e_primo(n);

    if (n_primo) {
        cout << n << " e um numero primo :)." << endl;
    } else {
        cout << n << " nao e um numero primo :(." << endl;
    }
    return 0;
}