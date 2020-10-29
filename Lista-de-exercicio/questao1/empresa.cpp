#include "empresa.hpp"

Empresa::Empresa(){}
Empresa::Empresa(string nome, string cnpj):nome(nome),cnpj(cnpj){}
Empresa::~Empresa(){}
string 
Empresa::getNomeEmpresa(){
	return this-> nome;
}
string 
Empresa::getCnpj(){
	return this-> cnpj;
}
int 
Empresa::getQtdFuncionarios(){
	return this-> qtd_funcionarios;
}
void 
Empresa::addFuncionario(Funcionario* novo_funcionario){
	
}
void Empresa::listarFuncionario();