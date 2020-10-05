#include <iostream>
#include "aluno.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	Aluno novo;

	novo.setNome("Lucas Silva");
	novo.setIdade(23);
	novo.setAltura(1.74);
	novo.setMatricula("2020");
	novo.setTelefone("(84) 99999-9999");


	Aluno* outro = new Aluno("Zé sumido",65,1.52,"2021",novo.getTelefone());

	/*
	Aluno* outro = new Aluno();
	outro->setNome("Zé sumido");
	outro->setIdade(65);
	outro->setAltura(1.52);
	outro->setMatricula("2021");
	outro->setTelefone("(84) 98888-8888");
	outro->setTelefone(novo.getTelefone());
	*/
	
	cout << "Nome: " << novo.getNome() << "Tel: " << novo.getTelefone() << endl;
	cout << "Nome: " << outro->getNome() << outro->getTelefone() << endl;
	
	delete outro;
	return 0;
}