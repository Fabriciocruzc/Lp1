#include <string>
#include <iostream>

class Empresa{
private:
	std::string nome;
	std::string cnpj;
	

public:
	Empresa();
	~Empresa();


	void setNome(std::string nome);
	std::string getNome();
	void setCnpj(std::string cnpj);
	std::string getCnpj();
	
};