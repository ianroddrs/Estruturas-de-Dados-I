#include <iostream>

using namespace std;

int main(){
    int b, e, aux,  resultado = 0;

    cout << "Digite um numero: ";
    cin >> b;
    cout << "Digite seu expoente: ";
    cin >> e;

    aux = b;

    for(int i = 1; i < e; i++){
        for(int j = 0; j < b; j++){
            resultado += aux;
        }
        aux = resultado;
        resultado = 0;
    }

    cout << "Resultado: " << aux << endl;
}