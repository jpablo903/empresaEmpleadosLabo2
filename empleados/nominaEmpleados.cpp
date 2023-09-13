#include <iostream>
#include <string>
#include "nominaEmpleados.h"
#include "empleado.h"

using namespace std;

void nominaEmpleados(){
    Empleado e[10];

    for(int i=0; i<5; i++){
        cout << "Ingrese empleado " << i+1<< ": " << endl;
        e[i].cargar();
        system("cls");
    }
    int aux;
    std::string nombre;
    std::string apellido;
    std::string email;

    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            if(e[j].getLegajo()>e[j+1].getLegajo()){
                aux = e[j+1].getLegajo();
                nombre = e[j+1].getNombre();
                apellido = e[j+1].getApellido();
                email = e[j+1].getMail();

                e[j+1].setLegajo(e[j].getLegajo());
                e[j+1].setNombre(e[j].getNombre());
                e[j+1].setApellido(e[j].getApellido());
                e[j+1].setMail(e[j].getMail());

                e[j].setLegajo(aux);
                e[j].setNombre(nombre);
                e[j].setApellido(apellido);
                e[j].setMail(email);
            }
        }
    }


    cout << ">>>Listado de Empleados<<<" <<endl;
    for(int i=0; i<5; i++){
        e[i].mostrar();
        cout << endl;
    }
    system("pause");
    system("cls");
}
