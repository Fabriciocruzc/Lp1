
#include <string>

using namespace std;

class Funcionario{
	
	protected:
	string nome;
	string sexo;
	double salario;

	public:
	void setNome(string nome);
	string getNome();
	void setSexo(string sexo);
	int getSexo();
	void setSalario(double salario);
	double getSalario();
};
