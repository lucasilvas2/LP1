#include <iostream>
#include "turma.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	Turma imd0030("Linguagem de Progrmação I","IMD0030");
	
	/*
	Turma imd0030;
	imd0030.setNome("Linguagem de Progrmação I");
	imd0030.setId("IMD0030");
	*/

	Aluno* maria = new Aluno("Maria Antonieta",45,1.62,"121234",
						"+5652 36323 2222");

	/*
	Aluno* maria = new Aluno();
	maria->setNome("Maria Antonieta");
	maria->setIdade(45);
	maria->setAltura(1.62);
	maria->setMatricula("121234");
	maria->setTelefone("+5652 36323 2222");
	*/

	imd0030.addAluno(maria);

	Aluno* bob = new Aluno("Bob Marley",25,1.82,"4654565",
						"+876 32324 3232");

	imd0030.addAluno(bob);

	Aluno* joao = new Aluno("João Canabrava",45,1.91,
					"32329956","84 62323 1212");

	imd0030.addAluno(joao);

	cout << imd0030.getId() << "-" << imd0030.getMatriculados() << "/" << CAPACIDADE_MAX << endl;

	imd0030.listarAlunos();

	imd0030.remAluno("Faustão");

	cout << imd0030.getId() << "-" << imd0030.getMatriculados() << "/" << CAPACIDADE_MAX << endl;

	imd0030.listarAlunos();

	delete maria;
	delete bob;
	delete joao;

	return 0;
}