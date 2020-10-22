#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_ 

#include <iostream>
using namespace std;

/*Contenha uma classe que representa um funcionário, 
registrando seu nome(pesquise o uso da classe string1), salário e data de admissão2;*/
class Funcionario
{
private:
	string nome;
	double salario;
	string data_de_admissao;
public:
	Funcionario();
	Funcionario(string nome, double salario, string data_de_admissao);
	~Funcionario();
	string getNome();
	void setNome(string nome);
	double getSalario();
	void setSalario(double salario);
	string getDataDeAdmissao();
	void setDataDeAdmissao();
	
};
#endif
