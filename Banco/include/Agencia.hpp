#include <string>

using namespace std;

class Agencia{
	
	private:
	string nome;
	int numero;

	public:
	Agencia();
	~Agencia();

	void setNome(string nome);
	string getNome();
	void setNumero(int numero);
	int getNumero();

};