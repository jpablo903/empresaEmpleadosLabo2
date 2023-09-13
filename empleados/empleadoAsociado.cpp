#include <iostream>
#include "empleadoAsociado.h"
using namespace std;

EmpleadoAsociado::EmpleadoAsociado(){}

int EmpleadoAsociado::getAnioIngreso(){return _anioIngreso;}
int EmpleadoAsociado::getAnioActual(){return _anioActual;}
void EmpleadoAsociado::setAnioIngreso(int ingreso){_anioIngreso=ingreso;}
void EmpleadoAsociado::setAnioActual(int actual){_anioActual=actual;}

float EmpleadoAsociado::calculoPorcentaje(float fijo, int ingreso, int actual){
    int anio{0};
    float porcentaje{0};
    anio = actual-ingreso;
    if(anio>5 && anio<15){
        porcentaje=fijo*10/100;
        porcentaje+=fijo;
        return porcentaje;
    }else{
        if(anio<20){
            porcentaje=fijo*20/100;
            porcentaje+=fijo;
            return porcentaje;
        }else{
            porcentaje=fijo*50/100;
            porcentaje+=fijo;
            return porcentaje;
        }
    }

}

void EmpleadoAsociado::cargar(){
    int ingreso, actual;
    float fijo;

    Empleado::cargar();
    cout << "Salario Fijo: ";
    cin >> fijo;
    cout << "Anio Ingreso: ";
    cin >> ingreso;
    cout << "Anio Actual: ";
    cin >> actual;
    setSalario(calculoPorcentaje(fijo, ingreso, actual));

}
void EmpleadoAsociado::mostrar(){
    Empleado::mostrar();
    cout << "Salario: " << getSalario()<<endl;
}
