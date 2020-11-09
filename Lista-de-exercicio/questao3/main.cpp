#include <iostream>
#include "roupa.hpp"


int main(int argc, char const *argv[])
{
    Produto* a = new Roupa("25252525", "Camisa", 256.00, "Flinke", MASCULINO, M);
    //Produto* b = new Produto("24242424", "Fruta", 20.00);
    

    cout << "Teste: " << (*a) << endl;
    //cout << "Teste: " << (*b) << endl;
    //double x = (*a) - (*b);
    //cout << "Subtraindo: " << x << endl;

    
    return 0;
}
