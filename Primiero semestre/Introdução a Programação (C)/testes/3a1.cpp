#include <iostream>
using namespace std;

int main() {
    int cavalos, x;
    cout << "Escreva quantos cavalos possuem no haras: ";
    cin >> cavalos;

    x = cavalos * 4;
    cout << "Sao necessarias " << x << " ferraduras para todos os cavalos.";
}