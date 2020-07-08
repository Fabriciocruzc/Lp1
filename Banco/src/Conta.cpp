#include "../include/Conta.hpp"

int Conta::quantidadeConta;

Conta::Conta(Cliente &titular, Agencia& agencia) {
	//this->numero = numero;
	this->titular = titular;
	//this->saldo = saldo;
	this->agencia = agencia;
	this->quantidadeConta +=1;
}

Conta::Conta(){
	this->quantidadeConta +=1;
}

Conta::~Conta(){

}

void Conta::saca(double valor){
	this->saldo -= valor;
}

void Conta::deposita(double valor){
	this->saldo += valor;
}

void Conta::transfere(double valor, Conta &c){
	this->saldo -= valor;
	c.deposita(valor);
}