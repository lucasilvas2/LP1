#include <iostream>
#include <cstdlib>

#include "dado.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
	
	if(argc == 2){
		Dado primeiro_dado;
		for (int i = 0; i < atoi(argv[1]); ++i){
			cout << primeiro_dado.jogar() << endl;
		}
	}
	
	cout << endl << primeiro_dado.getValor() << endl;
	return 0;
}