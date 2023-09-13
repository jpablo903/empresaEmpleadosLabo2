#include <iostream>
#include "empleadoXHora.h"
using namespace std;

EmpleadoHorario::EmpleadoHorario(){}

int EmpleadoHorario::getHorasTrabajadas(){return _horasTrabajadas;}
void EmpleadoHorario::setHorasTrabajadas(int horas){_horasTrabajadas=horas;}

void EmpleadoHorario::cargar(){
    int horasTrabajadas, precioXhora;

    Empleado::cargar();
    cout << "Precio por hora: ";
    cin >> precioXhora;
    cout << "Horas Trabajadas: ";
    cin >> horasTrabajadas;

    setSalario(precioXhora);
    setHorasTrabajadas(horasTrabajadas);

}
void EmpleadoHorario::mostrar(){

    Empleado::mostrar();
    cout << "Salario: " << (getSalario()*getHorasTrabajadas()) << endl;
}
