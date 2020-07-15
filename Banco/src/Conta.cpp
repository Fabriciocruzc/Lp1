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

void Conta::setNumero(int numero){
	this->numero = numero;
}

int Conta::getNumero(){
	return this->numero;
}

void Conta::setTitular(Cliente titular){
	this->titular = titular;
}

Cliente Conta::getTitular(){
	return this->titular;
}

void Conta::setSaldo(double saldo){
	this->saldo = saldo;
}

double Conta::getSaldo(){
	return this->saldo;
}

void Conta::setAgencia(Agencia agencia){
	this->agencia = agencia;
}

Agencia Conta::getAgencia(){
	return this->agencia;
}

void Conta::setClientePJ(ClientePJ clientepj){
	this->clientepj = clientepj;
}

ClientePJ Conta::getClientePJ(){
	return this->clientepj;
}

int Conta::getQuantidadeConta(){
	return quantidadeConta;
}