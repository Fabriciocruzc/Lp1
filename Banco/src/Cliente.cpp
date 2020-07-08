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