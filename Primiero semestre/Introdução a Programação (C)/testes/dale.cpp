#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double capital, taxa, tempo, montante, aportes_mensais;

    cout << "Digite o valor do capital: ";
    cin >> capital;

    cout << "Digite a taxa de juros anual: ";
    cin >> taxa;

    cout << "Digite o período de tempo em anos: ";
    cin >> tempo;

    cout << "Digite o valor do aporte mensal: ";
    cin >> aportes_mensais;

    int meses = tempo * 12;
    montante = capital;
    
    for (int i = 1; i <= meses; i++) {
        montante += aportes_mensais;
        montante *= (1 + tempo/1200);
    }

    cout << "O montante total apos " << tempo << " anos com aportes mensais de " << aportes_mensais << " e: " << montante << endl;
   
   system("pause");
    return 0;
}