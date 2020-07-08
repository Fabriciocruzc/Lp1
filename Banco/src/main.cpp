#include <iostream>
#include "../include/Conta.hpp"

using namespace std;

int main (int argc, char* argv[]) {

	Conta c;
	Conta m;
	Cliente Clc;

	

	c.numero = 122314214;
	c.titular.nome = "Maria";
	c.titular.cpf = "082.199.250-00";
	c.agencia.nome = "BB";
	c.agencia.numero = 12344;
	c.saldo = 1000;


	m.numero = 2316535;
	m.titular.nome = "Mario";
	m.titular.cpf = "082.199.250-66";
	m.agencia.nome = "BB";
	m.agencia.numero = 432547;
	m.saldo = 501;


	cout << "Numero da Conta: " << c.numero << endl;
	cout << "Nome do Tituar: " << c.titular.nome << endl;
	cout << "CPF do Tituar: " << c.titular.cpf << endl;
	cout << "Nome da Argencia: " << c.agencia.nome << endl;
	cout << "Numero da Argencia: " << c.agencia.numero << endl;
	cout << "Saldo: " << c.saldo << endl;

	c.saca(20);
	cout << "Sado atual: " << c.saldo << endl;

	c.deposita(100);
	cout << "Sado atual: " << c.saldo << endl;
	cout << endl;

	cout << "Numero da Conta: " << m.numero << endl;
	cout << "Nome do Tituar: " << m.titular.nome << endl;
	cout << "CPF do Tituar: " << m.titular.cpf << endl;
	cout << "Nome da Agencia: " << m.agencia.nome << endl;
	cout << "Numero da Agencia: " << m.agencia.numero << endl;
	cout << "Saldo: " << m.saldo << endl;

	c.transfere(500, m);
	cout << "Sado atual: " << m.saldo << endl;

	cout << "Quantidade de conta: " << c.quantidadeConta << endl;
	cout << "Quantidade de cliente: " << Clc.quantidadeCliente << endl;


	return 0;


}