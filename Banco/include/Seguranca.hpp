#ifndef SEGURANCA
#define SEGURANCA

#include <string>
#include "Funcionario.hpp"
using namespace std;

class Seguranca : public Funcionario{
	
	private:
	int idade;

	public:
	Seguranca();
	~Seguranca();
	void setIdade(int idade);
	int getIdade();

};

#endif