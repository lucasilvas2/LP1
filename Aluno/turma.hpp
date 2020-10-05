#ifndef _TURMA_
#define _TURMA_ 
#include <iostream>
#include "aluno.hpp"

using namespace std;
#define CAPACIDADE_MAX 10
class Turma
{
private:
	string nome;
	string id;
	Aluno* alunos[CAPACIDADE_MAX]; // Array de alunos que serão incluidos na turma
	int matriculados = 0;
public:
	string getNome();
	void setNome(string nome);
	string getId();
	void setId(string id);
	void addAluno(Aluno* novo);
	void remAluno(string nome);
	int getMatriculados();
	void listarAlunos();
	
};

#endif

