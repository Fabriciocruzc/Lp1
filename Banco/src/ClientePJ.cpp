#include "../include/ClientePJ.hpp"

ClientePJ::ClientePJ(){

}

ClientePJ::~ClientePJ(){
	
}


void ClientePJ::setRazaoSocial(string razaoSocial){
	this->razaoSocial = razaoSocial;
}

string ClientePJ::getRazaoSocial(){
	return this->razaoSocial;
}

void ClientePJ::setCnpj(string cnpj){
	this->cnpj = cnpj;
}

string ClientePJ::getCnpj(){
	return this->cnpj;
}