#include <iostream>
using namespace std;

int main() {
    int num, pares = 0, impares = 0;

    cout << "Digite 10 numeros inteiros:\n";

    for (int i = 0; i < 10; i++) {
        cin >> num;

        if (num % 4 == 0 && num % 2 == 0) {
            pares++;
        } else if (num % 5 == 0 && num % 2 != 0) {
            impares++;
        }
    }

    cout << "Quantidade de numeros pares multiplos de 4 sao: " << pares << endl;
    cout << "Quantidade de numeros ímpares multiplos de 5 sao: " << impares << endl;
    return 0;
}