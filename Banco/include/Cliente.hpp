#include <string>

using namespace std;

class Cliente{
	
	private:
	string nome;
	string cpf;
	static int quantidadeCliente;

	public:
	Cliente(string nome, string cpf);
	Cliente();
	~Cliente();

	void setNome(string nome);
	string getNome();
	void setCpf(string cpf);
	string getCpf();
	int getQuantidadeCliente();

};