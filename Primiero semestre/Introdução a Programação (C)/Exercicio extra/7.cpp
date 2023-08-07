#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2, soma, quadrado_soma, raiz_quadrada;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    soma = num1 + num2;
    quadrado_soma = pow(soma, 2);
    raiz_quadrada = sqrt(quadrado_soma);

    cout << "A raiz quadrada da soma ao quadrado de " << num1 << " e " << num2 << " é: " << raiz_quadrada << endl;

    return 0;
}