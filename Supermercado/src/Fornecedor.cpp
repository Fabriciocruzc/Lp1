#include "Fornecedor.hpp"

Fornecedor::Fornecedor(){

}

Fornecedor::~Fornecedor(){
	
}

void Fornecedor::listaProduto(){
	std::string linha;
	std::string temp;
	std::string nome;
	std:: string quant;
	int i;
	std::ifstream arquivo("fornecedor.csv");
	while (!arquivo.eof()) {
		std::getline(arquivo, linha);

		temp = "";
		for (i = 0; i < linha.size(); i++) {
			if (linha[i] != ',') {
				temp = temp + linha[i];
			} else {
				break;
			}
		}

		nome = temp;
		temp = "";
		i = i + 1;
		for (; i< linha.size(); i++) {
			if (linha[i] != ',') {
				temp = temp + linha[i];
			}else{
				break;
			}
		}

		quant = temp;

		std::cout << nome << " : " << quant << std::endl;
	}
}

void Fornecedor::repassarProduto(){
	std::string produto_F;
	std::cout << "Diagite o produto que quer solicitar" << std::endl;
	std::cin >> produto_F;

	int quantidade_F;
	std::cout << "Digite a quantidade" << std::endl;
	std::cin >> quantidade_F;
}