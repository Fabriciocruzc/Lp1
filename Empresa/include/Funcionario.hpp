
#include "Empresa.hpp"


class Funcionario{
    private:
        std::string nome;
        double salario;
        std::string dataAdimissao;
        std::string departamento;
        Empresa empresa;

    public:
    	Funcionario();
    	~Funcionario();
    	
        void setEmpresa(Empresa empresa);
        Empresa getEmpresa();
    	void setNome(std::string nome);
    	std::string getNome();
    	void setSalario(double salario);
    	double getSalario();
    	void setDataAdimissao(std::string dataAdimissao);
    	std::string getDataAdimissao();
    	void setDepartemento(std::string departamento);
    	std::string getDepartamento();
};