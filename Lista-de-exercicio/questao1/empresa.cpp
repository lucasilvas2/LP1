#include "empresa.hpp"

Empresa::Empresa(){}
Empresa::Empresa(string nome, string cnpj):nome(nome),cnpj(cnpj){}
Empresa::~Empresa(){}
string 
Empresa::getNomeEmpresa() const{
	return this-> nome;
}
string 
Empresa::getCnpj() const{
	return this-> cnpj;
}
int 
Empresa::getQtdFuncionarios() const{
	return this-> qtd_funcionarios;
}

void 
Empresa::addFuncionario(Funcionario* novo_funcionario){
	if (this-> qtd_funcionarios < CAPACIDADE_MAX)		
	{
		this-> funcionarios_empresa[this->qtd_funcionarios++] = novo_funcionario;
		cout << novo_funcionario->getNome() << endl;
	}
}
int 
Empresa::getEmpresa_ativas(){
	return empresa_ativas;
}
void 
Empresa::listarFuncionario(){
	for (int i = 0; i < this->qtd_funcionarios; ++i)
	{
		cout << this-> funcionarios_empresa[i]->getNome() << endl;
	}
}