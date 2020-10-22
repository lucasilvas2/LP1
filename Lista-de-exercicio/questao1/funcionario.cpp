#include "funcionario.hpp"
Funcionario::Funcionario():nome("Estagiário"), salario(0.00), data_de_admissao("00/00/00"){

}
Funcionario::Funcionario(string nome, double salario, string data_de_admissao):nome(nome),salario(salario), data_de_admissao(data_de_admissao){}
Funcionario::~Funcionario(){
	cout << "Funcionário " << this->getNome() << " foi demitido." << endl;
}
string Funcionario::getNome(){
	return this->nome;
}
void Funcionario::setNome(string nome){
	this->nome = nome;
}
double Funcionario::getSalario(){
	return this-> salario;
}
void Funcionario::setSalario(double salario){
	this-> salario = salario;
}
string Funcionario::getDataDeAdmissao(){
	return this-> data_de_admissao;
}
void Funcionario::setDataDeAdmissao(){
	this-> data_de_admissao = data_de_admissao;
}
