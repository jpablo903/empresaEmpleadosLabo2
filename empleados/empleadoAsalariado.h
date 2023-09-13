#ifndef EMPLEADOASALARIADO_H_INCLUDED
#define EMPLEADOASALARIADO_H_INCLUDED
#include "empleado.h"

class EmpleadoAsalariado:public Empleado{
    public:
        EmpleadoAsalariado();
        void cargar();
        void mostrar();

};

#endif // EMPLEADOASALARIADO_H_INCLUDED
