#include "App.hpp"
#include <sstream>
#include <fstream>


double set_double(std::string prec){

  std::stringstream stream(prec);
  char discard;
  double preco;

  stream >> discard;
  stream >> discard;
  stream >> discard;
  stream >> preco;
  stream >> discard;
  
  return preco;
}

int set_int(std::string cod){
  std::stringstream stream(cod);
  int codigo;
  stream >> codigo;
  return codigo;
}

int set_int2(std::string cod){
  std::stringstream stream(cod);
  int codigo;
  stream >> codigo;
  return codigo;
}

void limpar_registro(int n){
  n += 1;
  std::string nome_cliente = "cliente_";
  std::string extensao = ".txt";
  std::stringstream stream;
  stream << nome_cliente;
  stream << n;
  stream << extensao;
  std::string nome_arquivo = stream.str();
  std::ofstream arquivo(nome_arquivo);
  arquivo.close();
}

void menu(){
  std::cout << std::endl;
  std::cout << "Comandos:" << std::endl;
  std::cout << "1 - Adicionar saldo ao cliente atual" << std::endl;
  std::cout << "2 - Listar produtos da mercado" << std::endl;
  std::cout << "3 - Ver sacola do cliente mercado" << std::endl;
  std::cout << "4 - Comprar item" << std::endl;
  std::cout << "5 - Listar produtos do fornecedo" << std::endl;
  std::cout << "6 - Reabastecer estoque" << std::endl;
  std::cout << "0 - Encerra compras do cliente" << std::endl << std::endl;
}