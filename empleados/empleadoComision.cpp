#include <iostream>
#include "empleadoComision.h"
using namespace std;

EmpleadoXComision::EmpleadoXComision(){}

float EmpleadoXComision::getValorPorcentual(){return _valorPorcentual;}
void EmpleadoXComision::setValorPorcentual(float valorPorcentual){_valorPorcentual=valorPorcentual;}

void EmpleadoXComision::cargar(){
    float valorPorcentual, valorVendido;

    Empleado::cargar();
    cout << "Ingrese el valor porcentual: ";
    cin >> valorPorcentual;
    cout << "Ingrese valor total vendido: ";
    cin >> valorVendido;

    setSalario(valorVendido*valorPorcentual/100);
}
void EmpleadoXComision::mostrar(){
    Empleado::mostrar();
    cout << "Salario: " << getSalario()<< endl;
}
