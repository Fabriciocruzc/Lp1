#include "../include/Cliente.hpp"


void Cliente::setNome(string nome){
	this->nome = nome;
}

string Cliente::getNome(){
	return this->nome;
}

void Cliente::setIdade(int idade){
	this->idade = idade;
}

int Cliente::getIdade(){
	return this->idade;
}
