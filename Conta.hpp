#include "Cliente.hpp"
#include "Agencia.hpp"

using namespace std;

class Conta{
	
	public:
	int numero;
	Cliente titular;
	double saldo;
	Agencia agencia;

	void saca(double valor);
	void deposita(double valor);
	void transfere(double valor, Conta &c);
	
};