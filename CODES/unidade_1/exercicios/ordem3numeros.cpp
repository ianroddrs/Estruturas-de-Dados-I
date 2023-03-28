#include <iostream>
using namespace std;

int main(){
    int a, b, c, aux;

    cout << "Escreva o primeiro número: ";
    cin >> a;
    cout << "Escreva o segundo número: ";
    cin >> b;
    cout << "Escreva o terceiro número: ";
    cin >> c;

    if(a > c){
        aux = c;
        c = a;
        a = aux;
    }
    if(b > c){
        aux = c;
        c = b;
        b = aux;
    }
    
    cout << a << " " << b << " " << c << endl;
}