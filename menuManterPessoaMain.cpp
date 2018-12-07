#include "menuManterPessoaMain.h"

void listarPessoas(){
	int _opcao=0;
	while(_opcao!=1 && _opcao!=2){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                       LISTAR PESSOA                       *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tO que deseja cadastrar:"<<std::endl;
		std::cout <<
						 "\n\t1 - Pessoa Fisica"
						 "\n\t2 - Pessoa Juridica"<< std::endl;
		std::cout << "\n\tEscolha uma das alternativas e tecle enter: ";
		std::cin >> _opcao;
		switch(_opcao){
			case 1:		
			{
				
			}
			break;
			case 2:
			{
				
			}
			break;				
			default:				
				std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
				system("pause");
				break;
		}
	}

}

void criarOuAlterarPessoaFisica(PessoaFisica * pf){
		if(pf==NULL)
			pf=new PessoaFisica();
		std::cout <<"\n\tDigite o CPF: ";
		std::string cpf;
		std::cin >> cpf;
		pf->set_cpf(cpf);
		std::cin.clear();
		std::cout <<"\n\tDigite o nome: ";
		std::string nome;
		std::cin.ignore();
		std::getline(std::cin, nome);
		pf->set_nome(nome);
		std::cin.clear();
		std::cout <<"\n\tDigite o email: ";
		std::string email;
		std::cin >> email;
		pf->set_email(email);
		std::cin.clear();
		std::cout <<"\n\tDigite o telefone: ";
		std::string telefone;
		std::cin >> telefone;
		pf->set_telefone(telefone);
		std::cin.clear();
		char o=' ';
		while(o!='s' && o!='n' && o!='S' && o!='N'){ 
			std::cout <<"\n\tConfirme (S ou N): ";
			std::cin >> o;
			switch(o){
				case 's':
				case 'S':
					if(pf->get_id()==0){
						pf->set_id(PessoaFisica::get_new_id());
						PessoaFisica::cadastrar(pf);
						pf=NULL;
						delete pf;
					}
					break;
				case 'n':
				case 'N':
					if(pf->get_id()==0)
						delete pf;
					else{
						pf=NULL;
						delete pf;
					}
					break;
				default:
					std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
					system("pause");
					break;
			}
		}
}

void alterarPessoa(){
	int _opcao=0;
	while(_opcao!=5){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                      ALTERAR PESSOA                       *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tComo deseja procurar:"<<std::endl;
		std::cout <<
					 "\n\t1 - CPF"
					 "\n\t2 - CNPJ"
					 "\n\t3 - Nome"
					 "\n\t4 - Razao Social"
					 "\n\t5 - Voltar" << std::endl;
		std::cout << "\n\tInforme um criterio de pesquisa e tecle enter: ";
		
		std::cin >> _opcao;
		
		switch(_opcao){
			case 1:
				{
					std::cout << "\n\tDigite o CPF: ";
					std::string cpf;
					std::cin >> cpf;
					std::vector<Pessoa *> pessoas = PessoaFisica::pesquisaPessoaCPF(cpf);
					switch(pessoas.size()){
						case 0:
							std::cout << "\n\tCPF nao encontrado!";
							system("pause");
							break;
						case 1:
						{
							PessoaFisica * pf=dynamic_cast<PessoaFisica*>(pessoas[0]);
							criarOuAlterarPessoaFisica(pf);
							pf=NULL;
							delete pf;
							system("pause");
						}
						break;
						default:
							std::cout << "\n\tA pesquisa trouxe varias pessoas. Refine-a!";
							system("pause");
							break;
					}				
				}
				break;
			case 2:
				//pesquisarPessoaCNPJ();
				break;
			case 3:
				//pesquisarPessoaNome();
				break;
			case 4:
				//pesquisarPessoaRazaoSocial();
				break;				
			case 5:
				printf("Voltar\n");
				break;	
			default:				
				std::cout << "Opcao inexistente! Tente outra.\n" << std::endl;
				system("pause");
				break;
		}
	
	}
}

void cadastrarPessoa(){
	int _opcao=0;
	while(_opcao!=1 && _opcao!=2){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                     CADASTRAR PESSOA                      *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tO que deseja cadastrar:"<<std::endl;
		std::cout <<
						 "\n\t1 - Pessoa Fisica"
						 "\n\t2 - Pessoa Juridica"<< std::endl;
		std::cout << "\n\tEscolha uma das alternativas e tecle enter: ";
		std::cin >> _opcao;
		switch(_opcao){
			case 1:		
			{
				criarOuAlterarPessoaFisica(NULL);
				/*PessoaFisica * pf=new PessoaFisica();
				std::cout <<"\n\tDigite o CPF: ";
				std::string cpf;
				std::cin >> cpf;
				pf->set_cpf(cpf);
				std::cin.clear();
				std::cout <<"\n\tDigite o nome: ";
				std::string nome;
				std::cin.ignore();
				std::getline(std::cin, nome);
				pf->set_nome(nome);
				std::cin.clear();
				std::cout <<"\n\tDigite o email: ";
				std::string email;
				std::cin >> email;
				pf->set_email(email);
				std::cin.clear();
				std::cout <<"\n\tDigite o telefone: ";
				std::string telefone;
				std::cin >> telefone;
				pf->set_telefone(telefone);
				std::cin.clear();
				char o=' ';
				while(o!='s' && o!='n' && o!='S' && o!='N'){ 
					std::cout <<"\n\tConfirme (S ou N): ";
					std::cin >> o;
					switch(o){
						case 's':
						case 'S':
							pf->set_id(PessoaFisica::get_new_id());
							PessoaFisica::cadastrar(pf);
							pf=NULL;
							delete pf;
							break;
						case 'n':
						case 'N':
							delete pf;
							break;
						default:
							std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
							system("pause");
							break;
					}
				}*/
			}
			break;
			case 2:
			{
				PessoaJuridica *pj=new PessoaJuridica();
				std::cout <<"\n\tDigite o CNPJ: ";
				std::string cnpj;
				std::cin >> cnpj;
				pj->set_cnpj(cnpj);
				std::cin.clear();
				std::cout <<"\n\tDigite o nome fantasia: ";
				std::string nome1;
				std::cin.ignore();
				std::getline(std::cin, nome1);
				pj->set_nome(nome1);
				std::cin.clear();
				std::cout <<"\n\tDigite a razao social: ";
				std::string razao1;
				std::cin.ignore();
				std::getline(std::cin, razao1);
				std::cin.ignore();
				pj->set_razaoSocial(razao1);
				std::cin.clear();
				std::cout <<"\n\tDigite o email: ";
				std::string email1;
				std::cin >> email1;
				pj->set_email(email1);
				std::cin.clear();
				std::cout <<"\n\tDigite o telefone: ";
				std::string telefone1;
				std::cin >> telefone1;
				pj->set_telefone(telefone1);
				std::cin.clear();
				char op=' ';
				while(op!='s' && op!='S' && op!='n' && op!='N'){ 
					std::cout <<"\n\tConfirme (S ou N): ";
					std::cin >> op;
					switch(op){
						case 's':
						case 'S':
							pj->set_id(PessoaJuridica::get_new_id());
							PessoaJuridica::cadastrar(pj);
							pj=NULL;
							delete pj;
							break;
						case 'n':
						case 'N':
							delete pj;
							break;
						default:
							std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
							system("pause");
							break;
					}
				}
			}
			break;				
			default:				
				std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
				system("pause");
				break;
		}
	}
}

void menuManterPessoa(){
	int _opcao=0;
	while(_opcao!=5){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                       MANTER PESSOA                       *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tO que deseja fazer:"<<std::endl;
		std::cout <<
					 "\n\t1 - Cadastrar Pessoa"
					 "\n\t2 - Alterar Pessoa"
					 "\n\t3 - Deletar Pessoa"
					 "\n\t4 - Listar Pessoas"
					 "\n\t5 - Voltar" << std::endl;
		std::cout << "\n\tEscolha uma das alternativas e tecle enter: ";
		
		std::cin >> _opcao;
		
		switch(_opcao){
			case 1:				
				cadastrarPessoa();
				break;
			case 2:
				alterarPessoa();
				break;
			case 3:
				printf("Deletar Pessoa\n");
				break;
			case 4:
				listarPessoas();
				break;				
			case 5:
				printf("Voltar\n");
				break;	
			default:				
				std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
				system("pause");
				break;
		}
	
	}
}