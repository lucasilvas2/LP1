#include "produto.hpp"

class Bebida : public Produto{
    private:
        int teor_alcool;
        
        ostream& print(ostream& o) const;
    public:
        Bebida(string codigo, string descricao, double preco, int teor_alcool);
        ~Bebida(); 
        
        int getTeorAlcool();
        void setTeorAlcool();

};