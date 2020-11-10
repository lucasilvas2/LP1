#include "bebida.hpp"
#include "iomanip"

using std::setfill;
using std::setw;

Bebida::Bebida(string codigo, string descricao, double preco, int teor_alcool):
Produto(codigo, descricao, preco), teor_alcool(teor_alcool){}
Bebida::~Bebida(){} 
        
int 
Bebida::getTeorAlcool(){
    return this-> teor_alcool;
}

void 
Bebida::setTeorAlcool(){
    this-> teor_alcool = teor_alcool;
}
ostream& 
Bebida::print(ostream& o) const{
    o << this-> codigo << " | " << setfill('.') << setw(30) << this-> descricao << " | R$: " << 
    setfill(' ') << setw(10) <<fixed << setprecision(2) << this-> preco
    << " | " << setfill(' ') << setw(18) << this-> teor_alcool << "%";
    return o;
}