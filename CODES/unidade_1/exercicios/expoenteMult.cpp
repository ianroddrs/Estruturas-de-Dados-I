#include <iostream>

using namespace std;

int main(){
    int b, e, resultado = 1;

    cout << "Digite um numero: ";
    cin >> b;
    cout << "Digite seu expoente: ";
    cin >> e;

    for(int i = 0; i < e; i++){
        resultado *= b;
    }

    cout << "Resultado: " << resultado << endl;
}