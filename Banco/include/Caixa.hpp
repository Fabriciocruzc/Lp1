#ifndef CAIXA
#define CAIXA

#include <string>
#include "Funcionario.hpp"
using namespace std;

class Caixa :public Funcionario{
	
	private:
	int idade;

	public:
	Caixa();
	~Caixa();
	void setIdade(int idade);
	int getIdade();

};

#endif