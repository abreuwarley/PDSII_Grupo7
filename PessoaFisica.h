#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"
#include <vector>

class PessoaFisica : public Pessoa
{
protected:
	std::string cpf;
	std::string removeMascara(std::string cpf);
public:
	PessoaFisica(){};
	~PessoaFisica(){};
	std::string get_cpf(){ return cpf;};
	static std::vector<Pessoa *> pesquisaPessoaCPF(std::string cpf);
	void set_cpf(std::string cpf){this->cpf=removeMascara(cpf);};
};
#endif
