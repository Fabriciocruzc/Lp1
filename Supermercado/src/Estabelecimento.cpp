#include "Estabelecimento.hpp"



Estabelecimento::Estabelecimento() :
  estoque(200), quant_produto(0), produto(nullptr), lucro(0), numero_vendas(0), numero_clientes(0)
{
  std::string linha;
  std::ifstream arquivo("estoque.csv");
  produto = new Produto[estoque];
  while(!arquivo.eof())
  {
    if(quant_produto >= estoque)
    {
      aumentar_estoque();
      continue;
    }
    getline(arquivo, linha);
    if (linha.size() == 0) 
    {
      continue;
    }
    if(linha.at(0) == 'C')
    {
      continue;
    }
    else {
      std::size_t encontrado = linha.find(",");

        produto[quant_produto].codigo = set_int2(linha.substr(0,encontrado));
        linha.erase(0, encontrado + 1);

      encontrado = linha.find(",");

        produto[quant_produto].nome = linha.substr(0,encontrado);
        linha.erase(0, encontrado+1);

      encontrado = linha.find(",");

        produto[quant_produto].unidade = linha.substr(0,encontrado);
        linha.erase(0, encontrado+1);

      encontrado = linha.find(",");

        produto[quant_produto].preco = set_double(linha.substr(0,encontrado));
        linha.erase(0, encontrado+1);

      encontrado = linha.find(",");
      
        produto[quant_produto].quantidade = set_int(linha);
    }
    quant_produto++;
  }
}

Estabelecimento::Estabelecimento(std::string estoque_mercado) :
  estoque(200), quant_produto(0), produto(nullptr), lucro(0), numero_vendas(0), numero_clientes(0)
{
  std::string linha;
  std::ifstream arquivo(estoque_mercado);
  produto = new Produto[estoque];
  while(!arquivo.eof())
  {
    if(quant_produto >= estoque)
    {
      aumentar_estoque();
      continue;
    }
    getline(arquivo, linha);
    if (linha.size() == 0) 
    {
      continue;
    }
    if(linha.at(0) == 'C')
    {
      continue;
    }
    else {
      std::size_t encontrado = linha.find(",");

        produto[quant_produto].codigo = set_int2(linha.substr(0,encontrado));
        linha.erase(0, encontrado + 1);

      encontrado = linha.find(",");

        produto[quant_produto].nome = linha.substr(0,encontrado);
        linha.erase(0, encontrado+1);

      encontrado = linha.find(",");

        produto[quant_produto].unidade = linha.substr(0,encontrado);
        linha.erase(0, encontrado+1);

      encontrado = linha.find(",");

        produto[quant_produto].preco = set_double(linha.substr(0,encontrado));
        linha.erase(0, encontrado+1);

      encontrado = linha.find(",");
      
        produto[quant_produto].quantidade = set_int(linha);
    }
    quant_produto++;
  }
}


Estabelecimento::~Estabelecimento(void)
{
  delete[] produto;
}

void Estabelecimento::aumentar_estoque(){
   Produto *produto2;
   produto2 = new Produto[estoque*2];
   for(int i = 0; i < estoque; i++)
   {
     produto2[i] = produto[i];
   }
   estoque = estoque*2;
   delete[] produto;
   produto = produto2;
}

void Estabelecimento::listar(){
  std::cout << std::endl;
  for(int i = 0; i < estoque; i++)
  {
    if(produto[i].quantidade > 0)
    {
      std::cout << produto[i].quantidade << " " << produto[i].unidade << " de ";
      std::cout << produto[i].nome << std::endl;
    }
  }
}

int Estabelecimento::venda(int codigo){
  for(int i = 0; i < quant_produto; i++)
  {
    if(codigo == produto[i].codigo)
    {
      if(produto[i].quantidade == 0)
      {
        std::cout << "Não temos mais esse produto!" << std::endl;
        return 1;
      }
      std::cout << "Venda concluida" << std::endl;
      produto[i].quantidade--;
      lucro += produto[i].preco;
      registrar_venda(produto[i]);
    }
  }
  return 0;
}

void Estabelecimento::registrar_venda(Produto item)
{
  for(int i = 0; i < numero_vendas; i++)
  {
    if(item.codigo == vendas[i].codigo)
    {
      vendas[i].quantidade++;
      return;
    }
  }
  item.quantidade = 1;
  vendas.push_back(item);
  numero_vendas++;
}

void Estabelecimento::caixa()
{
  Produto item;
  std::ofstream caixa("caixa.csv");
  caixa << "COD,PRODUTO,UNIDADE DE MEDIDA,PREÇO,QUANTIDADE" << std::endl;
  for(int i = 0; i < numero_vendas; i++)
  {
    item = vendas[i];
    caixa << item.codigo << ",";
    caixa << item.nome << ",";
    caixa << item.unidade << ",";
    caixa << "\"R$ " << item.preco << "\",";
    caixa << item.quantidade;
    caixa << std::endl;
  }
  caixa << "Lucro total: " << lucro << std::endl;
  caixa.close();
}

void Estabelecimento::atualizar_estoque(){
  Produto item;
  std::ofstream estoque("estoque.csv");
  estoque << "COD,PRODUTO,UNIDADE DE MEDIDA,PREÇO,QUANTIDADE" << std::endl;
  for(int i = 0; i < quant_produto; i++)
  {
    item = produto[i];
    if(item.quantidade > 0)
    {
      estoque << item.codigo << ",";
      estoque << item.nome << ",";
      estoque << item.unidade << ",";
      estoque << "\"R$ " << item.preco << "\",";
      estoque << item.quantidade;
      estoque << std::endl;
    }
  }
  estoque.close();
}