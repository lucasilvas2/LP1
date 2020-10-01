#include <iostream>
#include "forca.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	
	Forca secreta("lucas");

	cout << "Palavra secreta: " << secreta.getPalavra_secreta() << endl;
	return 0;
}