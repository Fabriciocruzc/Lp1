#ifndef W5_CLIENTE_H
#define W5_CLIENTE_H

#include "Produto.hpp"
#include "Estabelecimento.hpp"


class Cliente{
  public:
    Cliente();
    Cliente(int n_cliente, Estabelecimento *mercado);
    Estabelecimento *mercado;
    double saldo;
    std::vector<Produto> sacola;
    int tamanho_sacola;
    int numero_cliente;

    void compra();
    void compra(std::string produto, double preco);
    void ver_sacola();
    void registro();
    void adicionar_saldo();
};


#endif