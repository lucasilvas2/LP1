#include <iostream>
#include "produto.hpp"

int main(int argc, char const *argv[])
{
    Produto* a = new Produto("25252525", "Camisa", 256.00);
    Produto* b = new Produto("24242424", "Fruta", 20.00);

    cout << "Teste: " << (*a) << endl;
    cout << "Teste: " << (*b) << endl;
    double x = (*a) - (*b);
    cout << "Subtraindo: " << x << endl;
    return 0;
}
