#include "../include/Cliente.hpp"

int Cliente::quantidadeCliente = -1;

Cliente::Cliente(string nome, string cpf){
	this->nome = nome;
	this->cpf = cpf;
	this->quantidadeCliente +=1;
}

Cliente::Cliente(){
	this->quantidadeCliente +=1;	
}

Cliente::~Cliente(){
}

void Cliente::setNome(string nome){
	this->nome = nome;
}

string Cliente::getNome(){
	return this->nome;
}

void Cliente::setCpf(string cpf){
	this->cpf = cpf;
}

string Cliente::getCpf(){
	return this->cpf;
}

int Cliente::getQuantidadeCliente(){
	return this->quantidadeCliente;
}