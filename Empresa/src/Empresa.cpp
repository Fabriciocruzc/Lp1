#include "../include/Empresa.hpp"

Empresa::Empresa(){

}

Empresa::~Empresa(){

}

void Empresa::setNome(std::string nome){
	this->nome = nome;
}

std::string Empresa::getNome(){
	return this->nome;
}

void Empresa::setCnpj(std::string cnpj){
	this->cnpj = cnpj;
}

std::string Empresa::getCnpj(){
	return this->cnpj;
}