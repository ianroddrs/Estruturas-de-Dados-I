#include <iostream>
#include "conta.h"
using namespace std;

TipoConta inicializar(int n, double sal){
    TipoConta conta;
    conta.numero = n;
    conta.saldo = sal;

    return conta;
}

void print(TipoConta conta){
    cout << conta.numero << " " << conta.saldo << endl;
}

void deposito(TipoConta *conta, double valor){
    conta->saldo += valor;
}

// LUMA CRISTIANA MARIA DA SILVA PEREIRA