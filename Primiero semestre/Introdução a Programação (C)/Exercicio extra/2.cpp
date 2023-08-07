#include <iostream>
using namespace std;

int main(){
    float n1, n2, n3, n4, media;

    cout << "Escreva a primeira nota: ";
    cin >> n1;

     cout << "Escreva a segunda nota: ";
    cin >> n2;

     cout << "Escreva a terceira nota: ";
    cin >> n3;

     cout << "Escreva a quarta nota: ";
    cin >> n4;

    media = (n1 + n2 + n3 + n4 ) / 4;
    cout << "Sua media foi de: " << media;
}