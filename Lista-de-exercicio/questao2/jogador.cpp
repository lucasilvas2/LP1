#include "jogador.hpp"

Jogador::Jogador(string nome):nome(nome){}
Jogador::~Jogador(){}

string 
Jogador::getNome()const{
	return this-> nome;
}
int 
Jogador::getPontos()const{
	return this-> pontos;
}
StatusJogador 
Jogador::getStatus()const{
	return this-> status;
}
int 
Jogador::Jogar(Dado &dado1, Dado &dado2){
	int jogada = (dado1.jogar() + dado2.jogar());
	this-> pontos += jogada;
	if(this-> pontos > alvo){
		this-> status = EXCLUIDO;
	}

	return jogada;
}
bool 
Jogador::podeJogar(){
	if(this-> status == EXCLUIDO){
		return false;
	}
	char opcao;
	do{
		cout << this->nome << "(" << this->pontos << "), deseja jogar? Digita S/N. ";
		cin >> opcao;
		cin.ignore();	 
	}while(opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n');
	if(opcao == 'S' || opcao == 's'){
		this-> status = ATIVO;
		return true;
	}
	this-> status = PARADO;
	return false;

}

int 
Jogador::getAlvo(){
	return alvo;
}