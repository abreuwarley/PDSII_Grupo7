#ifndef AGENDAMENTO_H_
#define AGENDAMENTO_H_

#include "Usuario.h"
#include <map>
#include "Material.h"
#include <functional>
#include <vector>

class Agendamento{

protected:
	
	std::string _data;
	std::string _local;
	Usuario _doador;
	Usuario _receptor;
	static std::map<unsigned int, Agendamento *> agendamentos;
	Material _material;

private:
	Agendamento(){};
	
	~Agendamento(){};
	
	static std::map<unsigned int, Agendamento *> get_agendamentos(){
		return agendamentos;
	}

	static void cadastrar(Agendamento *agendamento);

	static void deletar();

	static void modificar();

	static std::vector<Agendamento *> listar();

	static void pesquisar();
	
	std::string get_data(){
		return _data;
	}
	
	void set_data(std::string dia){
		this->_data=dia;
	}
	
	std::string get_local(){
		return _local;
	}
	
	void set_local(std::string local){
		this->_local=local;
	}
	
	Usuario get_doador(){
		return _doador;
	}
	
	void set_doador(Usuario doador){
		this->_doador=doador;
	}
	
	Usuario get_receptor(){
		return _receptor;
	}
	
	void set_receptor(Usuario receptor){
		this->_receptor=receptor;
	}
	
	Material get_material(){
		return _material;
	}
	
	void set_material(Material material){
		this->_material=material;
	}
};

#endif
