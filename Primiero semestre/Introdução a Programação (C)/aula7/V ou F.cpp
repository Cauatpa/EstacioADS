#include <iostream>

using namespace std;

int main (){
    
    int numero;

    cout <<"informe o numero: ";
    cin >> numero;

    if(numero > 10){
        cout << "Positivo" << endl;
    }else{
        cout << "Negativo" << endl;
    }

    cout << "Fim do programa";

    return 0;
}