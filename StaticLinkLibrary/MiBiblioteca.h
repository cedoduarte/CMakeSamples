#ifndef MIBIBLIOTECA_H
#define MIBIBLIOTECA_H

#include <iostream>
#include <string>

class Persona
{
public:
	Persona()
		: _nombre("")
		, _edad(0)
		, _sexo('?')
	{
		// Constructor
	}
	
	void setNombre(const std::string &nombre)
	{
		_nombre = nombre;
	}
	
	void setEdad(int edad)
	{
		_edad = edad;
	}
	
	void setSexo(char sexo)
	{
		_sexo = sexo;
	}
	
	std::string nombre() const
	{
		return _nombre;
	}
	
	int edad() const
	{
		return _edad;
	}
	
	char sexo() const
	{
		return _sexo;
	}
	
	bool valida() const;
	
	inline friend std::ostream &operator<<(std::ostream &o,
		const Persona &persona);
private:
	std::string _nombre;
	int _edad;
	char _sexo;
};

inline std::ostream &operator<<(std::ostream &o, const Persona &persona)
{
	return o << persona._nombre << ' '
		     << persona._edad   << ' '
			 << persona._sexo;
}

#endif // MIBIBLIOTECA_H