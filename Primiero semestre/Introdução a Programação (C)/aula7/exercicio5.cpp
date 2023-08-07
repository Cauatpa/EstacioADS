#include <iostream>

using namespace std;

int main() {
    float salario;
    int tempo_servico;
    
    cout << "Digite o salario do funcionario: ";
    cin >> salario;
    
    cout << "Digite o tempo de servico do funcionario em anos: ";
    cin >> tempo_servico;
    
    if (tempo_servico >= 10) {
        salario *= 1.3; // Reajuste de 30%
    } else {
        salario *= 1.375; // Reajuste de 37.5%
    }
    
    cout << "O novo salario do funcionario e: R$ " << salario << endl;
    
    return 0;
}