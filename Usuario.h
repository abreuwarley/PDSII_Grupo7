#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
#include <assert.h>

class Usuario
{
protected:

	unsigned int id;
	
	static unsigned int next_id;
	
	std::string email;

	std::string senha;
	
public:
	Usuario(){id=0;};
	
	virtual ~Usuario(){};
	
	unsigned int get_id(){return id;};
	
	void set_id(unsigned int id){this->id=id;};
	
	std::string get_email(){return email;};
	
	void set_email(std::string email){this->email=email;};
	
	std::string get_senha(){return senha;};
	
	void set_senha(){this->senha=senha;};
	
	static unsigned int get_new_id();
};
#endif
