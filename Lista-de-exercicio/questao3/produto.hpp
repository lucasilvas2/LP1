#pragma once

#include <iostream>

using namespace std;


class Produto
{
protected:
    string codigo;
    string descricao;
    double preco;

public:
    Produto(string codigo, string descricao, double preco);
    virtual ~Produto();

    string getCodigo() const;
    string getDescricao() const;
    double getPreco() const;

    void setCodigo(string codigo);
    void setDescricao(string descricao);
    void setPreco(double preco);

    double operator+(const Produto& produto) const;
    double operator-(const Produto& produto) const;
    double operator+(const double& valor) const;
    double operator-(const double& valor) const;
    bool operator==(const Produto& produto) const;
    friend ostream& operator<<(ostream& o, Produto const &produto);
private:
    virtual ostream& print(ostream&) const = 0;
};

