#ifndef _DADO_
#define _DADO_ 

#include <iostream>
//biblioteca necessária para gerar números randomicos
#include <random> 

using namespace std;

class Dado
{
private:
	int valor;
	random_device rd;
	default_random_engine gen;
	uniform_int_distribution<> dis;

public:
	Dado();
	int jogar();
	int getValor();
	
};

#endif