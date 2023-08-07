#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario_prin = "9876";
    string senha_prin = "12345";

    for (int chances = 0; chances < 3; ++chances ) {
        string usuario, senha;
        
        cout << "Usuario: ";
        cin >> usuario;
        
        cout << "Senha: ";
        cin >> senha;
        
        if (usuario == usuario_prin && senha == senha_prin) {
            cout << "Bem vindo ao sistema X" << endl;
            return 0;
        } else {
            cout << "Usuario ou senha incorretos. Tente novamente por favor." << endl;
        }
    }

    cout << "Usuario foi bloqueado!" << endl;
    return 0;
}