#include <iostream>
#include "turma.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	Turma imd0030;

	imd0030.setNome("Linguagem de Progrmação I");
	imd0030.setId("IMD0030");

	Aluno* maria = new Aluno();
	maria->setNome("Maria Antonieta");
	maria->setIdade(45);
	maria->setAltura(1.62);
	maria->setMatricula("121234");
	maria->setTelefone("+5652 36323 2222");

	imd0030.addAluno(maria);

	Aluno* bob = new Aluno();
	bob->setNome("Bob Marley");
	bob->setIdade(25);
	bob->setAltura(1.82);
	bob->setMatricula("4654565");
	bob->setTelefone("+876 32324 3232");

	imd0030.addAluno(bob);

	Aluno* joao = new Aluno();
	joao->setNome("João Canabrava");
	joao->setIdade(45);
	joao->setAltura(1.91);
	joao->setMatricula("32329956");
	joao->setTelefone("84 62323 1212");

	imd0030.addAluno(joao);

	cout << imd0030.getId() << "-" << imd0030.getMatriculados() << "/" << CAPACIDADE_MAX << endl;

	imd0030.listarAlunos();

	imd0030.remAluno(joao->getNome());

	cout << imd0030.getId() << "-" << imd0030.getMatriculados() << "/" << CAPACIDADE_MAX << endl;

	imd0030.listarAlunos();
	return 0;
}