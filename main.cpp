#include <iostream>
#include "Conta.hpp"

using namespace std;

int main (int argc, char* argv[]) {

	Conta c;

	c.numero = 122314214;
	c.nomeTitular = "Maria";
	c.saldo = 1000;

	Conta m;

	m.numero = 2316535;
	m.nomeTitular = "Mario";
	m.saldo = 501;


	cout << "Numero da Conta: " << c.numero << endl;
	cout << "Nome do Tituar: " << c.nomeTitular << endl;
	cout << "Saldo: " << c.saldo << endl;

	c.saca(20);
	cout << "Sado atual: " << c.saldo << endl;

	c.deposita(100);
	cout << "Sado atual: " << c.saldo << endl;

	cout << "Numero da Conta: " << m.numero << endl;
	cout << "Nome do Tituar: " << m.nomeTitular << endl;
	cout << "Saldo: " << m.saldo << endl;

	c.transfere(500, m);
	cout << "Sado atual: " << m.saldo << endl;


	return 0;


}