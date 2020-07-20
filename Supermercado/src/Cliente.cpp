
#include "Clinete.hpp"

Cliente::Cliente() : mercado(), saldo(100), tamanho_sacola(0), numero_cliente(0)
{
}

Cliente::Cliente(int numero_cliente,Estabelecimento* mercado) : mercado(), saldo (100), tamanho_sacola(0)
{
  this->numero_cliente = numero_cliente;
  this->mercado = mercado;
}

void Cliente::compra(){
  std::cout << "Digite o nome do produto" << std::endl;
  std::string produto;
  std::cin >> produto;
  for(int i = 0; i < mercado->quant_produto; i++)
  {
    if(mercado->produto[i].nome == produto)
    {
      compra(produto, mercado->produto[i].preco);
      return;
    }
  }
  std::cout << "Ops!, produto nao encontrado!" << std::endl;
}

void Cliente::compra(std::string produto, double preco)
{
  Produto item;
  for(int i = 0; i < mercado->quant_produto; i++)
  {
    if(produto == mercado->produto[i].nome){
      item = mercado->produto[i];
      break;
    }
  }
  if(item.preco > saldo)
  {
    std::cout << "saldo insuficiente" << std::endl;
    return;
  }
  if(!(mercado->venda(item.codigo)))
  {
    saldo -= item.preco;
    sacola.push_back(item);
    tamanho_sacola++;
    return;
  }
}

void Cliente::ver_sacola(){
  for (int i = 0; i < tamanho_sacola; i++)
  {
      std::cout << sacola[i].nome << std::endl;
  }
}

void Cliente::registro(){

  numero_cliente += 1;

  std::string nome_cliente = "cliente_";
  std::string extensao = ".txt";

  std::stringstream stream;
  stream << nome_cliente;
  stream << numero_cliente;
  stream << extensao;

  std::string nome_arquivo = stream.str();
  std::ofstream arquivo(nome_arquivo, std::ios::app);
  for (int i = 0; i < tamanho_sacola; i++)
  {
      arquivo << sacola[i].nome << " - R$ " << sacola[i].preco << std::endl;
  }
  arquivo.close();
}

void Cliente::adicionar_saldo(){
  std::cout << "Quanto de saldo quer adicinar?" << std::endl;
  double dinheiro;
  std::cin >> dinheiro;
  this->saldo += dinheiro;
}