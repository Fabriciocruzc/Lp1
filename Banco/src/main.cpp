#include <iostream>
#include "../include/Conta.hpp"
#include "../include/Fila.hpp"
#include "../include/Gerente.hpp"
#include "../include/Caixa.hpp"
#include "../include/Seguranca.hpp"


using namespace std;

int main (int argc, char* argv[]) {

	Conta c;
	Conta m;
	ClientePF Clc;
	ClientePF Cld;
	Caixa c1;
	Gerente g1;
	Seguranca s1;
	Agencia a;
	Agencia b;

	ClientePJ s;

	s.setRazaoSocial("Teste");
	//s.setCnpj("87.872.716/0001-67");
	

	c.setNumero(122314214);
	Clc.setNome("Maria");
	//Clc.setCpf("082.199.250-00");
	a.setNome("BB");
	a.setNumero(12344);
	c.setSaldo(1000);


	m.setNumero(122314214);
	Cld.setNome("Mario");
	//Cld.setCpf("082.199.250-99");
	b.setNome("BB");
	b.setNumero(12366);
	m.setSaldo(1000);

	c1.setNome("Julia");
	c1.setSexo("Feminio");
	c1.setSalario(1000);

	g1.setNome("Marta");
	g1.setSexo("Feminio");
	g1.setSalario(500);

	s1.setNome("Juio");
	s1.setSexo("Masculino");
	s1.setSalario(900);


	cout << "Numero da Conta: " << c.getNumero() << endl;
	//cout << "Nome do Tituar: " << Clc.getNome() << endl;
	//cout << "CPF do Tituar: " << Clc.getCpf() << endl;
	cout << "Nome da Argencia: " << a.getNome() << endl;
	cout << "Numero da Argencia: " << a.getNumero() << endl;
	cout << "Saldo: " << c.getSaldo() << endl;

	c.saca(20);
	cout << "Sado atual: " << c.getSaldo() << endl;

	c.deposita(100);
	cout << "Sado atual: " << c.getSaldo() << endl;
	cout << endl;

	cout << "Numero da Conta: " << m.getNumero() << endl;
	//cout << "Nome do Tituar: " << Cld.getNome() << endl;
	//cout << "CPF do Tituar: " << Cld.getCpf() << endl;
	cout << "Nome da Agencia: " << b.getNome() << endl;
	cout << "Numero da Agencia: " << b.getNumero() << endl;
	cout << "Saldo: " << m.getSaldo() << endl;

	c.transfere(500, m);
	cout << "Sado atual: " << m.getSaldo() << endl;

	cout << "Quantidade de conta: " << c.getQuantidadeConta() << endl;
	cout << "Quantidade de cliente: " << Clc.getQuantidadeCliente() << endl;

	cout << "Nome: " << c1.getNome() << endl;
	cout << "Sexo: " << c1.getSexo() << endl;
	cout << "Salario: " << c1.getSalario() << endl; 

	cout << "Nome: " << g1.getNome() << endl;
	cout << "Sexo: " << g1.getSexo() << endl;
	cout << "Salario: " << g1.getSalario() << endl; 

	cout << "Nome: " << s1.getNome() << endl;
	cout << "Sexo: " << s1.getSexo() << endl;
	cout << "Salario: " << s1.getSalario() << endl; 

	Fila<string>fila(Clc.getQuantidadeCliente());

	fila.push("Maria");	
	fila.push("Mario");

	cout<<"O utimo da fila cliente é: " << fila.back() << endl;

	fila.push("Teste");

	cout<<"O utimo da fila ClientePJ é: " << fila.back() << endl;

	return 0;


}