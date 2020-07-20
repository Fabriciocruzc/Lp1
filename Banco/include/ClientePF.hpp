#ifndef CLINETEPF
#define CLINETEPF
#include <string>

#include "Cliente.hpp"

using namespace std;

class ClientePF :public Cliente{
	
	private:
	string nome;	
	string cpf;
	static int quantidadeCliente;

	public:
	ClientePF();
	~ClientePF();

	int getQuantidadeCliente();

};

#endif