#ifndef EMPLEADOASOCIADO_H_INCLUDED
#define EMPLEADOASOCIADO_H_INCLUDED
#include "empleado.h"

class EmpleadoAsociado:public Empleado{
    public:
        EmpleadoAsociado();

        int getAnioIngreso();
        int getAnioActual();
        void setAnioIngreso(int);
        void setAnioActual(int);

        float calculoPorcentaje(float, int, int);
        void cargar();
        void mostrar();
    private:
        int _anioIngreso;
        int _anioActual;


};


#endif // EMPLEADOASOCIADO_H_INCLUDED
