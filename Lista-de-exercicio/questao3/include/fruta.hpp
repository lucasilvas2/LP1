#include "produto.hpp"

class Fruta : public Produto{
    private:
       string data_lote;
       string data_validade;

       ostream& print (ostream& o) const;       
    public:
        Fruta(string codigo, string descricao, double preco, string data_lote, string data_validade);
        ~Fruta();
        string getDataLote();
        string getDataValidade();
        void setDataLote();
        void setDataValidade();

};