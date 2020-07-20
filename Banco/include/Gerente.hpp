#ifndef GERENTE
#define GERENTE
#include <string>
#include "Funcionario.hpp"
using namespace std;

class Gerente : public Funcionario{
	
	private:
	int idade;

	public:
	Gerente();
	~Gerente();
	void setIdade(int idade);
	int getIdade();

};

#endif