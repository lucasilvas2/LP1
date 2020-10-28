#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_ 

#include <iostream>
#include <vector>
#include "date.hpp"

using namespace std;

/*Contenha uma classe que representa um funcionário, 
registrando seu nome(pesquise o uso da classe string1), salário e data de admissão2;*/
class Funcionario{
private:
	string nome;
	double salario;
	date data_de_admissao;
public:
	Funcionario();
	Funcionario(string nome, double salario, date data_de_admissao);
	~Funcionario();
	
	string getNome() const;
	date getDataDeAdmissao() const;
	double getSalario() const;
	void setSalario(double salario);
	
	friend bool operator == (const Funcionario & lhs, const Funcionario & rhs);
	
	
};

#endif
