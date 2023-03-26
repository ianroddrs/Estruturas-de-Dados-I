#include <iostream>
#include "NumeroComplexo.h"

using namespace std;

int main(){
    NumeroComplexo a, b, c, d;

    a = inicializa(2,5);
    cout << "a = ";
    imprime(a);

    b = inicializa(1,2);
    cout << "b = ";
    imprime(b);

    c = soma(a,b);
    cout << "c = ";
    imprime(c);

    d = inicializa(2,5);
    cout << "d = ";
    imprime(d);

    if (ehReal(d))
        printf("d eh real\n");
    else
        printf("d nao eh real\n");

    return 0;

    cout << "d = ";
    imprime(d);
}