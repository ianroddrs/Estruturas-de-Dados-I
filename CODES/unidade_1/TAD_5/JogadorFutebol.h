#include <string>
#include <vector>
using namespace std;

typedef struct{
    string nome;
    int jogos;
    int gols;
    int assistencias;
} Jogador;

typedef struct{
    string nome;
    string treinador;
    int vitorias;
    int empates;
    int derrotas;
    vector<Jogador> jogadores;
} Time;

Jogador Atribui(string, int, int, int);
void Imprime(Jogador);
bool EhBom(Jogador);

Time Atribui(string, string, int, int, int, vector<Jogador>);
void Imprime(Time);
int Pontuacao(Time);