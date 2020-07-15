#include "../include/Agencia.hpp"

Agencia::Agencia(){

}

Agencia::~Agencia(){

}

void Agencia::setNome(string nome){
	this->nome = nome;
}

string Agencia::getNome(){
	return this->nome;
}

void Agencia::setNumero(int numero){
	this->numero = numero;
}

int Agencia::getNumero(){
	return this->numero;
}