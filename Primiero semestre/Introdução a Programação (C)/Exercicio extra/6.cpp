#include <iostream>
using namespace std;

int main() {
    int duracao, horas, minutos, segundos;

    cout << "Digite a duracao da tarefa em segundos: ";
    cin >> duracao;

    horas = duracao / 3600; 
    minutos = (duracao % 3600) / 60; 
    segundos = duracao % 60;

    cout << "A duracao da tarefa e de " << horas << " hora(s), " << minutos << " minuto(s) e " << segundos << " segundo(s)." << endl;

    return 0;
}