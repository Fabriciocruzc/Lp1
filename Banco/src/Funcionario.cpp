#include "../incude/Funcionario.hpp"

void Funcionario::setNome(string nome){
	this->nome = nome;
}

string Funcionario::getNome(){
	return this->nome;
}

void Funcionario::setSexo(string sexo){
	this->sexo = sexo;
}

string Funcionario::getSexo(){
	return this->sexo;
}

void Funcionario::setSalario(double salario){
	this->salario = salario;
}

double Funcionario::getSalario(){
	return this->salario;
}