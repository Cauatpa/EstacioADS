#include <iostream>
using namespace std;

int main() {
   double b, h, x;

    cout << "Escreva a largura do triangulo: ";
    cin >> b;

    cout << "Escreva a altura: ";
    cin >> h;

    x = b * h / 2;
    cout << "A area do triangulo e: " << x;
}