#include <string>
#include <vector>
#include <iostream>
#include "JogadorFutebol.h"

using namespace std;

int main(){
    vector<Jogador> jogadores;

    Jogador jogador1  = Atribui("Neymar", 10, 9, 6);
    Jogador jogador2  = Atribui("pinba", 10, 2, 3);
    Jogador jogador3  = Atribui("Ronney", 10, 12, 3);
    Jogador jogador4  = Atribui("Cleber", 10, 3, 6);
    Jogador jogador5  = Atribui("Josiel", 10, 11, 9);

    Imprime(jogador1);
    Imprime(jogador3);

    jogadores = {jogador1, jogador2, jogador3, jogador4, jogador5};

    Time time1 = Atribui("Flamengo", "Adalberto", 5, 2, 3, jogadores);
    Imprime(time1);

    return 0;
}