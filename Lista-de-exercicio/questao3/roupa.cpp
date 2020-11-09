#include "roupa.hpp"
#include <iomanip>
using namespace std;

Roupa::Roupa(string codigo, string descricao, double preco, string marca, TipoSexo sexo, TipoTamanho tam):
            Produto(codigo,descricao,preco),marca(marca),sexo(sexo),tam(tam){}
Roupa::~Roupa(){}

string 
Roupa::getMarca()const{
    return this-> marca;
}

TipoSexo 
Roupa::getSexo()const{
    return this-> sexo;
}
TipoTamanho 
Roupa::getTamanho()const{
    return this-> tam;
}

void 
Roupa::setMarca(string marca){
    this->marca = marca;
}

void 
Roupa::setSexo(TipoSexo sexo){
    this-> sexo = sexo;
}

void 
Roupa::setTamanho(TipoTamanho tam){
    this-> tam = tam;
}

ostream& 
Roupa::print(ostream& o) const{
    o << this->codigo << " | " 
    << setfill('.') << setw(30) << this-> descricao 
    << " | R$: " << setfill(' ') << setw(10) <<fixed << setprecision(2) << this-> preco
    << " | " << setfill(' ') << setw(10) << this-> marca
    << " | " << setfill(' ') << setw(10) << this-> sexo
    << " | " << setfill(' ') << setw(10) << this-> tam; 
    return o;
}