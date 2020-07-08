#include "Cliente.hpp"
#include "Agencia.hpp"

using namespace std;

class Conta{
	
	public:
	int numero;
	Cliente titular;
	double saldo;
	Agencia agencia;
	static int quantidadeConta;

	Conta(Cliente &titular, Agencia& agencia);
	Conta();
	~Conta();

	void saca(double valor);
	void deposita(double valor);
	void transfere(double valor, Conta &c);
	
};