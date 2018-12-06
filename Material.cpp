#include "Material.h"
#include <iostream>
#include <stdio.h>

Material::Material()
{
    _codigo=0;
    //ctor
}

Material::~Material()
{
    //dtor
}

int Material::EscolherTipoResiduo(){
    int codigo;
    std::string confirma;
    std::cout<<"***************************************"<<std::endl;
    std::cout<<"    ESCOLHA UM TIPO DE RESIDUO"<<std::endl;
    std::cout<<"***************************************"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"1. Metal"<<std::endl;
    std::cout<<"2. Papel"<<std::endl;
    std::cout<<"3. Plastico"<<std::endl;
    std::cout<<"4. Vidro"<<std::endl;
    std::cout<<"5. Sair"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"Digite o codigo do residuo: ";
    std::cin>>codigo;
    while(codigo!=1&&codigo!=2&&codigo!=3&&codigo!=4&&codigo!=5){
        std::cout<<"Codigo invalido. Digite novamente: ";
        std::cin>>codigo;
    }
    std::cout<<""<<std::endl;
    PodemSerReciclados(codigo);
    std::cout<<""<<std::endl;
    NaoPodemSerReciclados(codigo);
    std::cout<<""<<std::endl;
    std::cout<<"************************************************"<<std::endl;
    std::cout<<"Digite c para confirmar a escolha ou s para sair"<<std::endl;
    std::cout<<"************************************************"<<std::endl;


    std::cin>>confirma;

    while(1){
    _confirma=confirma;
    if(_confirma=="c"){
        _codigo=codigo;
        return _codigo;
    }
    if(_confirma=="s"){
        return 0;
    }else{
    std::cout<<"Opcao invalida. Digite novamente:"<<std::endl;
    std::cin>>confirma;
    }
    }
}

void Material::PodemSerReciclados(int codigo)
{
    if(codigo==1){

    std::cout<<"Metais que podem ser reciclados"<<std::endl;
    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"Latas de bebidas e alimentos;tampas de recipientes de vidro; bandejas; panelas; ferragens; grampos; fios eletricos; chapas embalagens de marmitex; cobre;aço; lata de produtos de limpeza."<<std::endl;
    }
    if(codigo==2){
    std::cout<<"Papeis que podem ser reciclados"<<std::endl;
    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"Jornal; papel de computador; saco de papel; papel de escritorio; cadernos."<<std::endl;
    }
    if(codigo==3){
    std::cout<<"Plasticos que podem ser reciclados"<<std::endl;
    std::cout<<"----------------------------------"<<std::endl;
    std::cout<<"Embalagens de alimentos, produtos de beleza, produtos de limpeza;tampas; brinquedos; peças plasticas; canetas esferograficas; escovas de dente; baldes; artigos de cozinha."<<std::endl;
    }
    if(codigo==4){
    std::cout<<"Vidros que podem ser reciclados"<<std::endl;
    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"Copo; frasco de remedio; jarras; garrafas; vidro colorido."<<std::endl;
    }
}

void Material::NaoPodemSerReciclados(int codigo)
{
    if(codigo==1){
    std::cout<<"Metais que NAO podem ser reciclados"<<std::endl;
    std::cout<<"-----------------------------------"<<std::endl;
    std::cout<<"Latas"<<std::endl;
    }
    if(codigo==2){
    std::cout<<"Papeis que NAO podem ser reciclados"<<std::endl;
    std::cout<<"-----------------------------------"<<std::endl;
    std::cout<<"Jornal"<<std::endl;
    }
    if(codigo==3){
    std::cout<<"Plasticos que NAO podem ser reciclados"<<std::endl;
    std::cout<<"--------------------------------------"<<std::endl;
    std::cout<<"Embalagens"<<std::endl;
    }
    if(codigo==4){
    std::cout<<"Vidros que NAO podem ser reciclados"<<std::endl;
    std::cout<<"-----------------------------------"<<std::endl;
    std::cout<<"Copo"<<std::endl;
    }
}

