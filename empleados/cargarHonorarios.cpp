#include <iostream>
#include "cargarHonorarios.h"
#include "empleadoAsalariado.h"
#include "empleadoXHora.h"
#include "empleadoComision.h"
#include "empleadoAsociado.h"

using namespace std;

void cargarHorarios(){
    int tipo;

    EmpleadoAsalariado EA;
    EmpleadoHorario EH;
    EmpleadoXComision EC;
    EmpleadoAsociado EAS;

    cout << "Ingrese el tipo de empleado: ";
    cin >> tipo;

    switch(tipo){
        case 1:
            EA.cargar();
            system("cls");
            EA.mostrar();
            system("pause");
            system("cls");
            break;
        case 2:
            EH.cargar();
            system("cls");
            EH.mostrar();
            system("pause");
            system("cls");
            break;
        case 3:
            EC.cargar();
            system("cls");
            EC.mostrar();
            system("pause");
            system("cls");
            break;

        case 4:
            EAS.cargar();
            system("cls");
            EAS.mostrar();
            system("pause");
            system("cls");
            break;

    }

}
