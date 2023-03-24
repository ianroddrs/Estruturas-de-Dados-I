#include <iostream>
#include <string>

using namespace std;

struct Aluno{
    string nome;
    int matricula;
    char conceito;
};

int main(void){
    struct Aluno al, aux;

    al.nome = "Pedro";
    al.matricula = 200712;
    al.conceito = 'a';
    aux = al;

    cout << al.nome << " " << al.matricula << " " << al.conceito << endl;
    cout << aux.nome << " " << aux.matricula << " " << aux.conceito;

    return 0;
};