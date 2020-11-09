#include "produto.hpp"
#include <iomanip>

Produto::Produto(string codigo, string descricao, double preco):codigo(codigo), descricao(descricao), preco(preco){}
Produto::~Produto(){}

string 
Produto::getCodigo() const{
    return this-> codigo;
}
string 
Produto::getDescricao() const{
    return this->descricao;
}
double 
Produto::getPreco() const{
    return this-> preco;
}

void 
Produto::setCodigo(string codigo){
    this-> codigo = codigo;
}

void 
Produto::setDescricao(string descricao){
    this -> descricao = descricao;
}

void 
Produto::setPreco(double preco){
    this -> preco = preco;
}

double 
Produto::operator+(const Produto& produto) const{
    return this-> preco + produto.preco;
}
double 
Produto::operator-(const Produto& produto) const{
    return this-> preco - produto.preco;
}
double 
Produto::operator+(const double& valor) const{
    return this-> preco + valor;
}
double 
Produto::operator-(const double& valor) const{
    return this-> preco - valor;
}
bool 
Produto::operator==(const Produto& produto) const{
    return this-> codigo == produto.codigo;

}


ostream& operator<<(ostream& o, Produto& produto){
    o << produto.codigo << " | " << setfill('.') << setw(30) << produto.descricao << " | R$: " << 
    setfill(' ') << setw(10) <<fixed << setprecision(2) << produto.preco;
    return o;
}