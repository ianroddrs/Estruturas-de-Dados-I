#include <iostream>
#include "Numerocomplexo.h"

using namespace std;

NumeroComplexo inicializa(int real, int img){
    NumeroComplexo numero;
    numero.real = real;
    numero.img = img;
    return numero;
};

void imprime(NumeroComplexo numero){
    cout << "numero real: " << numero.real << "\n" << "numero imaginário: " << numero.img << "\n\n"
}

void copia(NumeroComplexo*, NumeroComplexo);