#include "persona.h"

std::string Persona::getNombre(){return _nombre;}
std::string Persona::getApellido(){return _apellido;}

void Persona::setNombre(std::string nombre){
    _nombre=nombre;
}
void Persona::setApellido(std::string apellido){
    _apellido=apellido;
}

Persona::Persona(){}
Persona::Persona(std::string nombre=" ", std::string apellido=" "){
    _nombre=nombre;
    _apellido=apellido;

}
