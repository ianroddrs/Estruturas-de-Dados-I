#include <iostream>
using namespace std;

int main(){
    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    if(numero > 0){
        cout << "O numero é positivo." << endl;
    }
    else if(numero < 0){
        cout << "O numero é negativo." << endl;
    }
    else{
        cout << "O numero é zero." << endl;
    }

    return 0;
}
