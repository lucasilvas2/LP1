#include "fruta.hpp"
Fruta::Fruta(string codigo, string descricao, double preco, string data_lote, string data_validade):
            Produto(codigo, descricao, preco), data_lote(data_lote), data_validade(data_validade){}
Fruta::~Fruta(){}

string 
Fruta::getDataLote(){
    return this-> data_lote;
}
string 
Fruta::getDataValidade(){
    return this-> data_validade;
}
void 
Fruta::setDataLote(){
    this-> data_lote = data_lote;
}
void 
Fruta::setDataValidade(){
    this-> data_validade = data_validade;
}

ostream& 
Fruta::print (ostream& o) const{
    o << this-> codigo << " | " << setfill('.') << setw(30) << this-> descricao << " | R$: " << 
    setfill(' ') << setw(10) <<fixed << setprecision(2) << this-> preco
    << " | Lote: " << setfill(' ') << setw(12) <<this-> data_lote 
    << " | Val.: " << setfill(' ') << setw(12) << this-> data_validade;
    return o;
} 