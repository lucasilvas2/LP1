#include <iostream>
#include "funcionario.hpp"

using namespace std;


int Funcionario::ativos = 0; 

int main(int argc, char const *argv[])
{
	
	Funcionario* lucas = new Funcionario("Lucas", 20000.00, date(10,10,1998));
	Funcionario* copia = new Funcionario("Lucas", 20000.00, date(10,10,1998));

	if (*lucas == *copia){
		cout << "Mesma pessoa" << endl; 
	}
	else{
		cout << "Diferentes " << endl;
	}

	
	cout << *lucas << endl;

	return 0;
}