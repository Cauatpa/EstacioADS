#include <iostream>

using namespace std;

int main (){
    int nt50, nt20, nt10, s; // nt50 = nota de 50, nt20 = nota de 20, nt10 = nota de 10, s = saque
    
    cout << "Banco ShowDeBola";

    cout << "Quanto deseja sacar: ";
    cin >> s;
    
    nt50 = s/ 50;
    s %= 50;
    
    nt20 = s / 20;
    s %= 20;
    
    nt10 = s / 10;
    
    cout << "Foram retiradas " << nt50 << " notas de R$ 50" << endl;
    cout << "Mais " << nt20 << " nota/s de R$ 20" << endl;
    cout << "E " << nt10 << " nota/s de R$ 10" << endl;
    
    return 0;

}