#include <iostream>
#include "funcionario.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	Funcionario* lucas = new Funcionario();

	lucas->setNome("Lucas");

	cout << lucas->getNome() << endl;

	Funcionario* samara = new Funcionario("Samara", 2000.00, "01/09/2016");
	cout << "Nome: "<<samara->getNome() << endl << "Salário: R$ "<<samara->getSalario() << endl<< "Data de adimissão: "<< samara->getDataDeAdmissao() << endl;

	delete lucas;
	delete samara;
	return 0;
}