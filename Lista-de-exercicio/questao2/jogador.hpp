#pragma once 

#include <iostream>
#include "dado.hpp"

using namespace std;

enum StatusJogador{ATIVO, PARADO, EXCLUIDO};

class Jogador
{
private: 
	string nome;
	int pontos;

	StatusJogador status;

	static int alvo;
public:
	Jogador(string nome);
	~Jogador();

	string getNome()const;
	int getPontos()const;
	StatusJogador getStatus()const;
	
	int Jogar(Dado &dado1, Dado &dado2);
	bool podeJogar();

	static int getAlvo();

	
};