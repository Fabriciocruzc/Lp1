#include "../include/ClientePF.hpp"

int ClientePF::quantidadeCliente;

ClientePF::ClientePF(){
	this->quantidadeCliente++;
}

ClientePF::~ClientePF(){

}

int ClientePF::getQuantidadeCliente(){
	return quantidadeCliente;
}