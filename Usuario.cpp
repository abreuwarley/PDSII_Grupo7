#include "Usuario.h"

unsigned int Usuario::next_id=0;

unsigned int Usuario::get_new_id(){
    next_id++;
    return next_id;
}
