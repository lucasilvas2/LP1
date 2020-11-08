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
	string nome;
	string cnpj;
	Funcionario* funcionarios_empresa[CAPACIDADE_MAX];
	int qtd_funcionarios = 0; 
	static int empresa_ativas;
public:
	Empresa();
	Empresa(string nome, string cnpj);
	~Empresa();
	string getNomeEmpresa() const;
	string getCnpj() const;
	int getQtdFuncionarios() const;
	void addFuncionario(Funcionario* novo_funcionario);
	void listarFuncionario();
	double aumentoSalario(double porcentagem);
	bool listarFuncionarioExperiencia(date referencia);

	static int getEmpresa_ativas();

	friend ostream& operator << (ostream &o, Empresa const E);

};
#endif