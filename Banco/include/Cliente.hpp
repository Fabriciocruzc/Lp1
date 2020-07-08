#include <string>

using namespace std;

class Cliente{
	
	public:
	string nome;
	string cpf;
	static int quantidadeCliente;

	Cliente(string nome, string cpf);
	Cliente();
	~Cliente();

};