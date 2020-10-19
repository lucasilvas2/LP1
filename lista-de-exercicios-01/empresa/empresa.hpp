#ifndef _EMPRESA_
#define _EMPRESA_
#include <iostream>
#include "funcionario.hpp"
using namespace std;

#define CAPACIDADE_MAX 50
//registrando seu nome, CNPJe lista de funcionários
class Empresa
{
private:
	string nome_empresa;
	string cnpj;
	Funcionario* funcionarios_empresa[CAPACIDADE_MAX];
	int qtd_funcionarios = 0; 
public:
	Empresa();
	Empresa(string nome, string cnpj);
	~Empresa();
	string getNomeEmpresa();
	void setNomeEmpresa(string nome);
	string getCnpj();
	void setCnpj(string cnpj);
	int getQtdFuncionarios();
	void addFuncionario(Funcionario* novo_funcionario);
	void listarFuncionario();

};
#endif