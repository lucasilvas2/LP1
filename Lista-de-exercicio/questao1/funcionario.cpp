#include "funcionario.hpp"
using namespace std;

Funcionario::Funcionario(){
	this-> nome = "Indefinido";
	this-> salario = 0.00;
}

Funcionario::Funcionario(string nome, double salario, date data_de_admissao):
nome(nome),salario(salario), data_de_admissao(data_de_admissao){}

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
Funcionario::getDataDeAdmissao() const{
	return this-> data_de_admissao;
}

bool 
operator==(const Funcionario & lhs, const Funcionario & rhs){
	return lhs.getNome() == rhs.getNome(); 
	/*if(lhs.getNome() == rhs.getNome()){
		return true;
	}
	else{
		return false;
	}
}*/

}
