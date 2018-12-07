#include "Pessoa.h"

std::map<unsigned int, Pessoa *> Pessoa::pessoas={};

void Pessoa::cadastrar(Pessoa *pessoa)
{
	Pessoa::pessoas.insert(std::pair<unsigned int, Pessoa *>(pessoa->get_id(),pessoa));
}

void Pessoa::deletar()
{
}

void Pessoa::modificar()
{
}

void Pessoa::listar()
{
}

void Pessoa::pesquisar()
{
}
