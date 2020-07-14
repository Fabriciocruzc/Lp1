#include "../include/Funcionario.hpp"
#include <vector>

int main(int argc, char const *argv[]){
	
	Empresa a1;
	a1.setNome("Mercado Livre");
	a1.setCnpj("87.872.716/0001-67");


	std::vector<Funcionario> funcionario;
	int count;

	std::cout << "Diagite a quantidade de Funcionarios" << std::endl;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		Funcionario f1;
		f1.setEmpresa(a1);

		std::cout << "Nome do Funcionario?" << std::endl;
		std::string nome;
		std::cin >> nome;
		f1.setNome(nome);

		std::cout << "Salario do Funcionario?" << std::endl;
		double salario;
		std::cin >> salario;
		f1.setSalario(salario);

		std::cout << "Data de adimissão Funconario?" << std::endl;
		std::string dataAdimissao;
		std::cin >> dataAdimissao;
		f1.setDataAdimissao(dataAdimissao);

		std::cout << "Departameto do Funcionario?" << std::endl;
		std::string departamento;
		std::cin >> departamento;
		f1.setDepartemento(departamento);

		funcionario.push_back(f1);

	}

	std::string departamento;
	std::cout << "Digite o departameto que vai receber o aumento de 10%" << std::endl;
	std::cin >> departamento;

	for (int i = 0; i < funcionario.size(); ++i)
	{
		if (funcionario[i].getDepartamento() == departamento){
			funcionario[i].setSalario(funcionario[i].getSalario() * 1.1);
			std::cout << funcionario[i].getNome() << " : " << funcionario[i].getSalario() << std::endl;
		}
	}

	return 0;
}