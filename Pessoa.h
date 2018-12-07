#ifndef PESSOA_H
#define PESSOA_H

#include "Usuario.h"
#include <map>
#include "Material.h"
#include <functional>

class Pessoa : public Usuario
{
protected:
	std::string nome;

	std::string telefone;

	static std::map<unsigned int, Pessoa *> pessoas;

	//Material materiaisAColetar[];
	//Pessoa pessoa;
	//Material materiaisADoar[];

public:
	Pessoa(){};
	
	~Pessoa(){};
	
	static std::map<unsigned int, Pessoa *> get_pessoas(){return pessoas;};

	static void cadastrar(Pessoa *pessoa);

	static void deletar();

	static void modificar();

	static void listar();

	static void pesquisar();
	
	std::string get_nome(){return nome;};
	
	void set_nome(std::string nome){this->nome=nome;};
	
	std::string get_telefone(){return telefone;};
	
	void set_telefone(std::string telefone){this->telefone=telefone;};
};
#endif
