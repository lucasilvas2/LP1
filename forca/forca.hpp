#ifndef _FORCA_
#define _FORCA_ 
#include <iostream>

using namespace std;

class Forca{
private:
	string palavra_secreta;
	string palavra_descoberta;
	int tentativas;
public:
	Forca();
	Forca(string palavra_secreta);
	~Forca();
	string getPalavra_secreta();
	string getPalavra_descoberta();
	int getTentativas();

};
#endif