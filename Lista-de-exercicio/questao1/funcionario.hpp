#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_ 

#include <iostream>
#include <string>
#include <iomanip>
#include "date.hpp"

using namespace std;


/*Contenha uma classe que representa um funcionário, 
registrando seu nome(pesquise o uso da classe string1), salário e data de admissão2;*/
class Funcionario{
private:
	string nome;
	double salario;
	date admissao;
	static int ativos;


public:
	Funcionario();
	Funcionario(string nome, double salario, date admissao);
	~Funcionario();
	
	string getNome() const;
	date getAdmissao() const;
	double getSalario() const;
	void setSalario(double salario);

	static int getAtivos();
	
	friend ostream& operator <<(ostream &o, Funcionario const f);
	friend bool operator == (const Funcionario & lhs, const Funcionario & rhs);	
};

#endif
