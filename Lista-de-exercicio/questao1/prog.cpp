#include <iostream>
#include "empresa.hpp"


using namespace std;
double teste;

int Funcionario::ativos = 0; 
int Empresa::empresa_ativas = 0;

int main(int argc, char const *argv[])
{
	
	Funcionario* lucas = new Funcionario("Lucas", 20000.00, date(05,11,1996));
	Funcionario* marcos = new Funcionario("Marcos", 50000.00, date(10,10,1998));

	Empresa* TEC = new Empresa("Tecnologia Avançada", "10.200.300/0001-10");
	cout << *TEC << endl;

	TEC->addFuncionario(lucas);
	TEC->addFuncionario(marcos);
	
	TEC->listarFuncionario();

	//teste = TEC->aumentoSalario(5);
	//cout << "Aumento teste: " << teste << endl;
	cout << "Aumento: " << endl;
	TEC-> aumentoSalario(5);
	TEC->listarFuncionario();
	return 0;
}