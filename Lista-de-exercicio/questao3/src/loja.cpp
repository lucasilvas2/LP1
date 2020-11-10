#include "loja.hpp"

Loja::Loja():qtdProdutos(0){}
Loja::~Loja(){}

int 
Loja::getQtdProduto(){
    return this-> qtdProdutos;
}
Produto* 
Loja::addProduto(Produto* novo){
    this-> lista_de_produtos.push_back(novo);
    qtdProdutos = lista_de_produtos.size();
    return novo;
}
void 
Loja::listarProdutos(){
    cout << "Listando produto: " << endl;

    for(const auto &lista_de_produtos : this->lista_de_produtos){
        cout << *lista_de_produtos << endl;
    }
}

void Loja::teste(){
    Produto* a = new Roupa("25252525", "Camisa pano de prato", 256.00, "Flinke", MASCULINO, M);
    Produto* b = new Bebida("24242424", "Caxaxa 51 - a pior ideia", 20.00, 110);
    Produto* c = new Fruta("23232323", "Cajamanga", 5.00, "09/11/1870", "20/08/2025");

    addProduto(a);
    addProduto(b);
    addProduto(c);
    
    Fruta* banana = new Fruta("22222222","Banana", 2.00, "08/05/4545", "10/85/7415");
    addProduto(banana);

    listarProdutos();

    cout << "Quantidade de produtos: " << getQtdProduto() << endl;

    /*cout << "Teste: " << (*a) << endl;
    cout << "Teste: " << (*b) << endl;
    cout << "Teste: " << (*c) << endl;
    cout << "Verificando: " << (*banana) << endl;*/

    double x = (*a) - (*b);
    cout << "Subtraindo: " << x << endl;
}