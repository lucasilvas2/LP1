#pragma once

#include "produto.hpp"
enum TipoSexo{
    MASCULINO, FEMININO
};
enum TipoTamanho{
    P, M, G, GG, XG
};

class Roupa : public Produto{
    private:
        string marca;
        TipoSexo sexo;
        TipoTamanho tam;

        ostream& print(ostream& o) const;
    public:
        Roupa(string nome, string descricao, double preco, string marca, TipoSexo sexo, TipoTamanho tam);
        ~Roupa();

        string getMarca()const;
        TipoSexo getSexo()const;
        TipoTamanho getTamanho()const;

        void setMarca(string marca);
        void setSexo(TipoSexo sexo);
        void setTamanho(TipoTamanho tam);

        
};