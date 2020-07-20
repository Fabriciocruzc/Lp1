#include <string>
#include <fstream>
#include <iostream>

#include "VectorSuplementar.hpp"
#include "ProdutoFornecedor.hpp"

class Fornecedor{
public:

	VectorSuplementar<ProdutoFornecedor>produtoFornecedor;

	Fornecedor();
	~Fornecedor();

	void listaProduto();
	void repassarProduto();
	
	
};