#pragma once

#include <vector>
#include "jogador.hpp"

class Jogo
{
private:
	vector <Jogador*> jogadores;
	int qtdJogadores;
	int rodadas;
	Jogador* vencedor = nullptr;
	Dado d1, d2;
	
	
public:
	Jogo();
	~Jogo();

	void novaRodada();
	int totalEmjogo();
	void run();
	Jogador* addJogador(Jogador * novo);

	int getAtivos();
	void mostrarResultado();
	
};