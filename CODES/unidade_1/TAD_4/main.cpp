#include <iostream>
#include "agenda.h"
#include <string>

using namespace std;

int main(){
    agenda contato  = inicializa("Ian","Ananindeua - PA","(91) 989055041");
    
    imprime(contato);
    buscaNome(&contato, "Ian");

    alteraNome(&contato, "Ian Mateus Alves Rodrigues");
    alteraNumero(&contato, "(91)9890440");

    imprime(contato);
    buscaNome(&contato, "Ian");

    return 0;
}