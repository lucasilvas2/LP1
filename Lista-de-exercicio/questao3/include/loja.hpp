#include <iostream>
#include <vector>

#include "roupa.hpp"
#include "bebida.hpp"
#include "fruta.hpp"

class Loja{
    private:
        vector<Produto*> lista_de_produtos;
        int qtdProdutos;

    public:
        Loja();
        ~Loja();
        
        int getQtdProduto();
        Produto* addProduto(Produto* novo);
        void listarProdutos();

        void teste();
};