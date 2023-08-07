#include <iostream>
using namespace std;

int main (){
    float l, p, a; //lado, primetro e area.

    cout << "Digite o/a comprimeto/altura/base: ";
    cin >> l;

    p = l * 4;
    cout << "O perimetro foi de: " << p;

    a = l * l;
    cout << "\nE a area e de: " << a;
}