#include <iostream>

using namespace std;

int main (){

    int loginbanco = 1234;
    int senhabanco = 4321;

    int senhauser;
    int loginuser;

    bool estalogado;

    cout << "informe seu login: ";
    cin >> loginbanco;

    cout << "informe sua senha: ";
    cin >> senhabanco;

    cout << (loginuser == loginbanco) << endl;
    cout << (senhauser == senhabanco) << endl;
    cout << (loginuser == loginbanco && senhauser == senhabanco) << endl;
    estalogado = 1;

    return 0;
}