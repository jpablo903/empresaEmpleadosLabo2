#include <iostream>
#include "empleadoAsalariado.h"

using namespace std;

EmpleadoAsalariado::EmpleadoAsalariado(){}
void EmpleadoAsalariado::cargar(){
    int salario;

    Empleado::cargar();
    cout << "Salario: ";
    cin >> salario;

    setSalario(salario);
}
void EmpleadoAsalariado::mostrar(){

    Empleado::mostrar();
    cout << "Salario: " << getSalario()<< endl;
}
