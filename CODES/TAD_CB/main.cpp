#include <iostream>
#include "conta.h"

using namespace std;

int main(){
    TipoConta conta;
    conta = inicializar(10,1000);

    print(conta);

    deposito(&conta, 1);

    print(conta);

    return 0;
};