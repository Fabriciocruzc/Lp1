#ifndef CLIENTE
#define CLIENTE
#include <string>
using namespace std;

class Cliente{
	
	protected:
	string nome;
	int idade;;

	public:
	void setNome(string nome);
	string getNome();
	void setIdade(int idade);
	int getIdade();

};

#endif