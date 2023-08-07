#include <iostream>

using namespace std;

int main() {
    float p, a, i;
    
    cout << "Digite o peso da pessoa em kg: ";
    cin >> p;
    
    cout << "Digite a altura da pessoa em metros: ";
    cin >> a;
    
    i = p / (a * a);
    
    cout << "O IMC da pessoa e: " << i << endl;
    
    if (i < 18.5) {
        cout << "A pessoa esta abaixo do peso ideal" << endl;
    } else if (i < 25) {
        cout << "A pessoa esta com o peso ideal" << endl;
    } else if (i < 30) {
        cout << "A pessoa esta com sobrepeso" << endl;
    } else if (i < 35) {
        cout << "A pessoa esta com obesidade grau I" << endl;
    } else if (i < 40) {
        cout << "A pessoa esta com obesidade grau II" << endl;
    } else {
        cout << "A pessoa esta com obesidade grau III ou morbida" << endl;
    }
    return 0;
}