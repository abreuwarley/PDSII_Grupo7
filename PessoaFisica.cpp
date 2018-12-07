#include "PessoaFisica.h"

std::string PessoaFisica::removeMascara(std::string cpf){
	std::string invalidos="().-";
	for ( std::string::iterator it=cpf.begin(); it!=cpf.end(); ++it)
		for ( std::string::iterator itI=invalidos.begin(); itI!=invalidos.end(); ++itI)
			if (*it==*itI)
				cpf.erase(it);		
	return cpf;	
}

std::vector<Pessoa *> PessoaFisica::pesquisaPessoaCPF(std::string cpf){
	std::vector<Pessoa *> pessoas=std::vector<Pessoa *>();
	for ( std::map<unsigned int, Pessoa *>::iterator it=Pessoa::pessoas.begin(); it!=Pessoa::pessoas.end(); ++it){
		PessoaFisica* pessoa = dynamic_cast<PessoaFisica*>(it->second);
		if(pessoa){
			if (pessoa->get_cpf()==cpf)
				pessoas.push_back(pessoa);
		}
	}
	return pessoas;
	
}


