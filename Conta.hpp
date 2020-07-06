#include <string>

using namespace std;

class Conta{
	
	public:
	int numero;
	string nomeTitular;
	double saldo;

	void saca(double valor);
	void deposita(double valor);
	void transfere(double valor, Conta &c);
	
};