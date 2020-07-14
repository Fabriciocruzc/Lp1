#include "../include/Funcionario.hpp"

Funcionario::Funcionario(){

}

Funcionario::~Funcionario(){

}

void Funcionario::setEmpresa(Empresa empresa){
	this->empresa = empresa;
}

Empresa Funcionario::getEmpresa(){
	return this->empresa;
}

void Funcionario::setNome(std::string nome){
	this->nome = nome;
}

std::string Funcionario::getNome(){
	return this->nome;
}

void Funcionario::setSalario(double salario){
	this->salario = salario;
}

double Funcionario::getSalario(){
	return this->salario;
}

void Funcionario::setDataAdimissao(std::string dataAdimissao){
	this->dataAdimissao = dataAdimissao;
}

std::string Funcionario::getDataAdimissao(){
	return this->dataAdimissao;
}

void Funcionario::setDepartemento(std::string departamento){
	this->departamento = departamento;
}

std::string Funcionario::getDepartamento(){
	return this->departamento;
}