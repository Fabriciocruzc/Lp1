#ifndef CONTA
#define CONTA
#include "Agencia.hpp"
#include "ClientePJ.hpp"
#include "ClientePF.hpp"


using namespace std;

class Conta{
	
	private:
	int numero;
	Cliente titular;
	double saldo;
	Agencia agencia;
	ClientePJ clientepj;
	static int quantidadeConta;

	public:
	Conta(Cliente &titular, Agencia& agencia);
	Conta();
	~Conta();

	void setNumero(int numero);
	int getNumero();
	void setTitular(Cliente titular);
	Cliente getTitular();
	void setSaldo(double saldo);
	double getSaldo();
	void setAgencia(Agencia agencia);
	Agencia getAgencia();
	void setClientePJ(ClientePJ clientepj);
	ClientePJ getClientePJ();
	int getQuantidadeConta();

	void saca(double valor);
	void deposita(double valor);
	void transfere(double valor, Conta &c);
	
};

#endif