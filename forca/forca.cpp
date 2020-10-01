#include "forca.hpp"

Forca::Forca(string x):palavra_secreta(x){
}

Forca::~Forca(){}

string 
Forca::getPalavra_secreta(){
	return this-> palavra_secreta;
}

string 
Forca::getPalavra_descoberta(){
	return this-> palavra_descoberta;
}

int 
Forca::getTentativas(){
	return  this-> tentativas;
}
