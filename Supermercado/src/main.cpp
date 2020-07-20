#include "Clinete.hpp"
#include "Fornecedor.hpp"

int main(int argc, char* argv[]){
  
  int action = 10, NumeroCliente = 0, aux = 1;
  Estabelecimento mercado("estoque.csv");
  
      Cliente cliente(NumeroCliente, &mercado);
      Fornecedor f;
      while(true){
        menu();
        std::cin >> action;
        if(action == 0)
        {
          limpar_registro(NumeroCliente);
          cliente.registro();
          NumeroCliente++;
          break;
        } else if(action == 1){

          cliente.adicionar_saldo();
        }
        else if(action == 2){
          mercado.listar();
        }
        else if(action == 3){

          cliente.ver_sacola();
        }
        else if(action == 4){

          cliente.compra();
        }
        else if(action == 5){

          f.listaProduto();

        } else if(action){

          f.repassarProduto();
        }
        else
          std::cout << "Ação na existe!" << std::endl;
      }
   
  mercado.caixa();

  mercado.atualizar_estoque();
  return 0;
}