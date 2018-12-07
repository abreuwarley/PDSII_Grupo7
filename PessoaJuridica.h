#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include "Pessoa.h"

class PessoaJuridica : public Pessoa
{
protected:
	std::string cnpj;

	std::string razaoSocial;
	
	std::string removeCaracterInvalido(std::string cnpj);

public:
	PessoaJuridica(){};
	
	~PessoaJuridica(){};

	std::string get_cnpj(){return cnpj;};
	
	void set_cnpj(std::string cnpj){this->cnpj = removeCaracterInvalido(cnpj);};
	
	std::string get_razaoSocial(){return razaoSocial;};
	
	void set_razaoSocial(std::string razaoSocial){this->razaoSocial=razaoSocial;};
};
#endif
