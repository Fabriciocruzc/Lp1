#ifndef W5_ESTABELECIMENTO_H
#define W5_ESTABELECIMENTO_H

#include "Produto.hpp"
#include "App.hpp"

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

class Estabelecimento{
  public:
    Estabelecimento();
    Estabelecimento(std::string estoque_mercado);
    ~Estabelecimento();
    int estoque;
    int quant_produto;
    Produto* produto;
    double lucro;
    std::vector<Produto> vendas;
    int numero_vendas;
    int numero_clientes;

    void listar();
    int venda(int codigo);
    void registrar_venda(Produto item);
    void caixa();
    void atualizar_estoque();

    void aumentar_estoque();

    void reabastecer();
};


#endif