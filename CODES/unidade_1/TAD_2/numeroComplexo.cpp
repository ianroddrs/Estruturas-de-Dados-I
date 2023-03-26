#include <iostream>
#include "NumeroComplexo.h"

using namespace std;

NumeroComplexo inicializa(float real, float img){
    NumeroComplexo numero;
    numero.real = real;
    numero.img = img;
    return numero;
};

void imprime(NumeroComplexo numero){
    cout << "-------------------------" << endl;
    cout << "numero real: " << numero.real << "\n" << "numero imaginário: " << numero.img << "\n\n";
    cout << "-------------------------" << endl;
}

void copia(NumeroComplexo *destino, NumeroComplexo origem){
    destino->real = origem.real;
    destino->img = origem.img;
}

NumeroComplexo soma(NumeroComplexo c1, NumeroComplexo c2){
    NumeroComplexo resultado;
    resultado.real = c1.real + c2.real;
    resultado.img = c1.img + c1.img;
    return resultado;
}

int ehReal(NumeroComplexo c){
    return c.img == 0;
}