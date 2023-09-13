#include <iostream>
#include "empleadoXHora.h"
#include "cargarHonorarios.h"
#include "nominaEmpleados.h"

using namespace std;

int main()
{
    int opc=1;
    while (opc !=0){
        cout << "SISTEMA DE GESTION" << endl;
        cout << "1. Calculo de honorarios de un empleado" << endl;
        cout << "2. Nomina de empleados ordenada por legajo" << endl;
        cout << "Opcion: ";
        cin >> opc;

        system("cls");
        switch(opc){
            case 1:
                cargarHorarios();
            break;
            case 2:
                nominaEmpleados();
            break;
        }
    }


    return 0;
}
