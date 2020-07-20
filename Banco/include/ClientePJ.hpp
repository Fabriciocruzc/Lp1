#include <string>

#ifndef CLINETEPJ
#define CLINETEPJ
#include "Cliente.hpp"

using namespace std;

class ClientePJ : public Cliente{
	private:
		string razaoSocial;
		string cnpj;

	public:
		ClientePJ();
		~ClientePJ();

		void setRazaoSocial(string razaoSocial);
		string getRazaoSocial();
		void setCnpj(string cnpj);
		string getCnpj();
	
};

#endif