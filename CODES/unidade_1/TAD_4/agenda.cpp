#include <iostream>
#include "agenda.h"

using namespace std;

agenda inicializa(string nome, string endereco, string numero){
    agenda contato;
    contato.nome = nome;
    contato.endereco = endereco;
    contato.numero = numero;

    return contato;
}

void imprime(agenda contato){
    cout << "----------------------------------------------------------------" << endl;
    cout << "nome: " << contato.nome << "\nendereco: " << contato.endereco << "\nnumero: " << contato.numero << endl;
    cout << "----------------------------------------------------------------" << endl;
}

void alteraNome(agenda *contato, string nome){
    contato->nome = nome;
}

void alteraNumero(agenda *contato, string numero){
    contato->numero = numero;
}

bool buscaNome(agenda *contato, string nome){
    if(contato->nome == nome){
        cout << "esse contato existe" << endl;
        return true;
    } else {
        cout << "esse contato não existe" << endl;
        return false;
    }
}