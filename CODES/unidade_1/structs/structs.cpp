#include <iostream>
#include <string>
using namespace std;

struct Aluno{
    string nome;
    int matricula;
    char conceito;
};

struct Professor{
    string nome;
    int matricula;
    string classes[3];
};

int main(void){
    struct Aluno al, aux;
    struct Professor pr;

    al.nome = "Pedro";
    al.matricula = 200712;
    al.conceito = 'A';
    aux = al;

    pr.nome = "Jose";
    pr.matricula = 12345;

    cout << al.nome << " " << al.matricula << " " << al.conceito << endl;
    cout << aux.nome << " " << aux.matricula << " " << aux.conceito << endl;
    cout << pr.nome << " " << pr.matricula << " " << pr.classes << endl;

    return 0; 
}