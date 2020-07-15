#include <string>

using namespace std;

class ClientePJ{
	private:
		string razaoSocial;
		string cnpj;

	public:
		ClientePJ();
		~ClientePJ();

		void setRazaoSocial(string razaoSocial);
		string getRazaoSocial();
		void setCnpj(string cnpj);
		string getCnpj();
	
};