#ifndef MENUMANTERPESSOAMAIN_h
#define MENUMANTERPESSOAMAIN_h


#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include "PessoaJuridica.h"
#include "PessoaFisica.h"
#include <vector>

void listarPessoas();

void criarOuAlterarPessoaFisica(PessoaFisica * pf);

void alterarPessoa();

void cadastrarPessoa();

void menuManterPessoa();

#endif