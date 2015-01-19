#include "MiBiblioteca.h"

using namespace std;

bool Persona::valida() const
{
	if (_nombre.empty()) {
		return false;
	}
	if (_edad < 0) {
		return false;
	}
	if (!(_sexo == 'M' 
		|| _sexo == 'm' 
		|| _sexo == 'F' 
		|| _sexo == 'f' 
		|| _sexo == '?')) {
		return false;
	}
	return true;
}