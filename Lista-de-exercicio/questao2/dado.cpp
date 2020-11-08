#include <random>
#include "dado.hpp"

Dado::Dado():rd(), gen(rd()), dis(1,6){
	valor = round(dis(gen));
}

int Dado::jogar(){
	valor = round(dis(gen));
	return valor;
}
int 
Dado::getValor(){
	return valor;
}