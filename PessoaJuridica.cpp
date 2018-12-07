#include "PessoaJuridica.h"


std::string PessoaJuridica::removeCaracterInvalido(std::string cnpj){
	std::string invalidos=".-/";
	for ( std::string::iterator it=cnpj.begin(); it!=cnpj.end(); ++it)
		for ( std::string::iterator itI=invalidos.begin(); itI!=invalidos.end(); ++itI)
			if (*it==*itI)
				cnpj.erase(it);		
	return cnpj;	
}


