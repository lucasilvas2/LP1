#include "funcionario.hpp"
using namespace std;

Funcionario::Funcionario(){
	this-> nome = "Indefinido";
	this-> salario = 0.00;
}

Funcionario::Funcionario(string nome, double salario, date admissao):
nome(nome),salario(salario), admissao(admissao){}

Funcionario::~Funcionario(){
	//cout << "Funcionário " << this->getNome() << " foi demitido." << endl;
}

string 
Funcionario::getNome() const{
	return this->nome;
}

double 
Funcionario::getSalario() const{
	return this-> salario;
}

void 
Funcionario::setSalario(double salario){
	this-> salario = salario;
}

date
Funcionario::getAdmissao() const{
	return this-> admissao;
}


int 
Funcionario::getAtivos(){
	return ativos;
}

ostream& operator <<(ostream &o, Funcionario const f){
	o << "Nome: " << f.nome << " - " << "R$ " << fixed <<
	setprecision(2) << f.salario << " - " << f.admissao;
	return o;
}

bool 
operator==(const Funcionario & lhs, const Funcionario & rhs){
	return lhs.getNome() == rhs.getNome(); 
}
