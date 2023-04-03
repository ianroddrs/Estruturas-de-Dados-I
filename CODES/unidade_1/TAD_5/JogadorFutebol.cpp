#include <string>
#include <iostream>
#include "JogadorFutebol.h"

using namespace std;

Jogador Atribui(string nome, int jogos, int gols, int assistencias){
    Jogador jogador;

    jogador.nome = nome;
    jogador.jogos = jogos;
    jogador.gols = gols;
    jogador.assistencias = assistencias;

    return jogador;
}

void Imprime(Jogador jogador){
    cout << "----------------------------------------------------------------" << endl;
    cout << "Nome: " << jogador.nome << endl;
    cout << "Dados estatísticos:" << endl;
    cout << "\tJogos = " << jogador.jogos << endl;
    cout << "\tGols = " << jogador.gols << endl;
    cout << "\tAssistencias = " << jogador.assistencias << endl;
    if(EhBom(jogador)){
        cout << "Jogador é bom!" << endl;
    }
    else{
        cout << "Jogador não é bom!" << endl;
    }
    cout << "----------------------------------------------------------------" << endl;
}

bool EhBom(Jogador jogador){
    if(jogador.gols >= jogador.jogos || jogador.assistencias >= jogador.jogos){
        return true;
    }else{
        return false;
    }
}




Time Atribui(string nome, string treinador, int vitorias, int empates, int derrotas, vector<Jogador> jogadores){
    Time time;

    time.nome = nome;
    time.treinador = treinador;
    time.vitorias = vitorias;
    time.derrotas = derrotas;
    time.empates = empates;
    time.jogadores = jogadores;

    return time;
};

void Imprime(Time time){
    cout << "----------------------------------------------------------------" << endl;
    cout << "Nome: " << time.nome << endl;
    cout << "treinador: " << time.treinador << endl;
    cout << "Dados estatísticos:" << endl;
    cout << "\tVitorias = " << time.vitorias << endl;
    cout << "\tDerrotas = " << time.derrotas << endl;
    cout << "\tEmpates = " << time.empates << endl;
    cout << "\tPontuação = " << Pontuacao(time) << endl;
    cout << "----------------------------------------------------------------" << endl;

};

int Pontuacao(Time time){
    int pontos = (time.vitorias * 3) + (time.empates);
    return pontos;
}