#include <stdio.h>
#include <iostream>

void menuManterPessoa(){
	int _opcao=0;
	while(_opcao!=5){
		system("cls");
		printf(">>Menu Manter Pessoa:\n1 - Cadastrar Pessoa\n2 - Alterar Pessoa\n3 - Deletar Pessoa\n4 - Pesquisar Pessoa\n5 - Voltar");
		printf("\nEscolha uma das opcoes:");
		scanf("%d",&_opcao);
		
		switch(_opcao){
			case 1:				
				printf("Cadastrar Pessoa\n");
				break;
			case 2:
				printf("Alterar Pessoa\n");
				break;
			case 3:
				printf("Deletar Pessoa\n");
				break;
			case 4:
				printf("Pesquisar Pessoa\n");
				break;
		}
	
	}
}

int main(int argc, char **argv)
{
	int _opcao=0;
	while(_opcao!=4){
		system("cls");
		printf(">Menu Principal:\n1 - Manter Pessoa\n2 - Manter Material\n3 - Agendar Coleta\n4 - Sair");
		printf("\nEscolha uma das opcoes:");
		scanf("%d",&_opcao);
		
		switch(_opcao){
			case 1:
				menuManterPessoa();
				break;
			case 2:
				printf("Manter Material:\n");
				break;
			case 3:
				printf("Agendar Coleta:\n");
				break;
			case 4:
				printf("Doe depois...tchau!\n");
				return 0;
				break;
			default:
				if(_opcao < 1 || _opcao > 4){
					printf("Opcao inexistente! Tente outra.\n");
					system("pause");
				}
				break;
		}
	
	}
	return 0;
}
