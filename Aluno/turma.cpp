#include <iostream>
#include "turma.hpp"
#include "aluno.hpp"

using namespace std;

Turma::Turma(){
	this->nome =  "A definir";
	this->id = "IMD????";
}
Turma::Turma(string nome, string id):nome(nome),id(id){}

//destrutor removendo todos alunos na memória percorrendo a lista
Turma::~Turma(){
	for (int i = 0; i < this->matriculados; ++i)
	{
		delete this->alunos[i];
	}
}
string 
Turma::getNome(){
	return this->nome;
}
void 
Turma::setNome(string nome){
	this->nome = nome;
}
string 
Turma::getId(){
	return this->id;
}
void 
Turma::setId(string id){
	this->id = id;
}
void 
Turma::addAluno(Aluno* novo){
	if(this->matriculados < CAPACIDADE_MAX){
		this->alunos[this->matriculados++] = novo;
	}
}
void 
Turma::remAluno(string nome){
	bool encontrou = false;
	for (int i = 0; i < this->matriculados; ++i)
	{
		//identifica o aluno para ser removido, desloca até a última posição para ser excluido 
		if(alunos[i]->getNome() == nome){
			Aluno* tmp = alunos[i];
			alunos[i] = alunos[i+1];
			alunos[i+1] = tmp;
			encontrou = true;
		}
	}
	if(encontrou){
		delete alunos[this->matriculados--];
	}
}
int 
Turma::getMatriculados(){
	return this->matriculados;
}

void
Turma::listarAlunos(){
	for (int i = 0; i < this->matriculados; ++i)
	{
		cout << alunos[i]->getNome() << endl;
	}
}