#include <iostream>
#include "empleado.h"
using namespace std;

Empleado::Empleado(){}

int Empleado::getLegajo(){return _legajo;}
int Empleado::getTipo(){return _tipo;}
float Empleado::getSalario(){return _salario;}
std::string Empleado::getMail(){return _mail;}

void Empleado::setLegajo(int legajo){ _legajo=legajo;}
void Empleado::setTipo(int tipo){_tipo=tipo;}
void Empleado::setSalario(float salario){ _salario=salario;}
void Empleado::setMail(std::string mail){ _mail=mail;}

void Empleado::cargar(){
    int legajo;
    std::string nombre;
    std::string apellido;
    std::string mail;

    cout << "Legajo: ";
    cin >> legajo;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Mail: ";
    cin >> mail;

    setNombre(nombre);
    setApellido(apellido);
    setLegajo(legajo);
    setMail(mail);
}
void Empleado::mostrar(){
    cout << "Legajo: " << getLegajo() << endl;
    cout << "Nombre y Apellido: " << Persona::getNombre() << ", " << Persona::getApellido() << endl;
    cout << "Mail: " << getMail()<< endl;
}
